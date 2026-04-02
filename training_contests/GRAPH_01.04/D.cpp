#include <bits/stdc++.h>
using namespace std;

vector<bool> usd(2e5+2, false);
vector<vector<int>>g;
int comp_len = 0;
void dfs(int v){
    usd[v] = true;
    comp_len++;
    for (int to : g[v]){
        if (!usd[to]) dfs(to);
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    g.resize(n+1);
    set<pair<int, int>> edges;
    while (m--){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        if (u > v) swap (u, v);
        edges.insert({u, v});
    }
    dfs(1);
    cout << (comp_len == n && edges.size() == n-1 ? "YES\n" : "NO\n");
}
