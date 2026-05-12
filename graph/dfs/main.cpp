#include <bits/stdc++.h>
#define pb push_back
using namespace std;

void dfs(int v, vector<vector<int>>& graph, vector<bool>& visited, vector<int>& comp) {
    visited[v] = true;
    comp.pb(v);
    for (int to : graph[v]) {
        if (!visited[to]) dfs(to, graph, visited, comp);
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].pb(b);
        graph[b].pb(a);
    }

    vector<bool> visited(n + 1, false);
    int c = 1;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            vector<int> comp;
            dfs(i, graph, visited, comp);
            cout << "comp #" << c << ": ";
            for (int v : comp) cout << v << ' ';
            cout << '\n';
            c++;
        }
    }
    return 0;
}
