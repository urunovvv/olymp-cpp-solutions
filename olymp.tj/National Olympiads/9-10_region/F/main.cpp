#include <bits/stdc++.h>
using namespace std;
void dfs(int v, vector<vector<int>>& g, vector<int>& comp, int id) {
    comp[v] = id;
    for (int to : g[v])
        if (comp[to] == -1)
            dfs(to, g, comp, id);
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> comp(n + 1, -1);
    int id = 0;
    for (int i = 1; i <= n; i++)
        if (comp[i] == -1)
            dfs(i, g, comp, id++);
    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << (comp[a] == comp[b] ? "YES\n" : "NO\n");
    }
}
