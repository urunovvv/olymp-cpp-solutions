#include <bits/stdc++.h>
using namespace std;
#define pb emplace_back

const int SIZE = 2e5+1;

vector<int>visited(SIZE, 0);
vector<vector<int>> graph(SIZE);

bool haveCycle(int start) {
    int n = graph.size();
    queue<int>q;
    visited[start] = 1;
    q.push(start);
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int x : graph[v]) {
            if (!visited[x]) {
                visited[x] = 1;
                q.push(x);
            }
            else return true;
        }
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }
    for (int i = 1; i <= n; i++){
        if (haveCycle(i)){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}