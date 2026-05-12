#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;

void dfs(int v, vector<vector<ll>>& graph, vector<bool>& visited, vector<ll>& comp) {
    visited[v] = true;
    comp.pb(v);
    for (int to : graph[v]) {
        if (!visited[to]) dfs(to, graph, visited, comp);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].pb(b);
        graph[b].pb(a);
    }

    vector<bool> visited(n + 1, false);
    vector<ll> comps;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            vector<ll> comp;
            dfs(i, graph, visited, comp);
            comps.pb(comp.size());
        }
    }
    cout << m - (n - comps.size()) << '\n';
    return 0;
}
