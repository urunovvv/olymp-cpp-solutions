#include <bits/stdc++.h>
#define pb push_back
using namespace std;
vector<vector<int>> graph;
vector<int> path;
vector<bool> color(2e5, 0);
int x, y;
vector<bool> visited(2e5, false);
bool bfs(int start) {
    int n = graph.size();
    queue<int>q;
    visited[start] = true;
    q.push(start);
    color[start] = 1;
    bool cur_clr = 0;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int x : graph[v]) {
            cur_clr = !color[v];
            if (!visited[x]) {
                visited[x] = true;
                q.push(x);
                color[x] = cur_clr;
            } else{
                if (color[x] == color[v]) return false;
            }
        }
        //cur_clr = (cur_clr == 1 ? 2 : 1);
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    graph.resize(n+1);
    while (m--){
        int u,v;
        cin >> u >> v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    for (int i=1; i<=n; i++){
        if (!visited[i]){
            if(!bfs(i)){
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
    for (int i=1; i<=n; i++){
        cout << color[i] + 1 << ' ';
    }
}
