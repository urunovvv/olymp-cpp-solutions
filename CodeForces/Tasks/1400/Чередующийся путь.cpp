#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
vector<char> color;
int one = 0, two = 0;
// vector<bool> visited; 
int ans = -1;
void dfs(int start, int clr)
{
    color[start] = clr;
    one += clr == 1;
    two += clr == 2;
    // visited[start] = true;
    for (int to : graph[start]){
        if (color[to] != color[start]){
            dfs(to, clr == 1 ? 2 : 1);
        }
        else{
            ans = 0;
        }
    }
    ans = max(ans, max(one, two));
}

void urunov()
{
    int n, m;
    cin >> n >> m;
    graph.resize(n+1);
    color.resize(n+1, 0);
    // visited.resize(n+1, false);
    one = 0, two = 0;
    while (m--){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }
    int result = 0;
    for (int i = 1; i <= n; i++){
        if (color[i] == 0){
            dfs(i, 1);
            result += ans;
            ans = -1;
            one = 0, two = 0;
        }
    }
    cout << result << '\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    graph.reserve(2e5+1);
    color.reserve(2e5+1);
    // visited.reserve(2e5+1);
    int t;
    cin >> t;
    while (t--) urunov();
}