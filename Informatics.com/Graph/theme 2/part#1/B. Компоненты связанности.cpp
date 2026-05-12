#include<bits/stdc++.h>
#define vvi vector<vector<int>>
#define vi vector<int>
#define pb push_back
using namespace std;

void dfs(int v, vvi& graph, vi& visited, vi& comp) {
    visited[v] = 1;
    comp.pb(v);
    for (int to : graph[v]) {
        if (!visited[to]) dfs(to, graph, visited, comp);
    }
}

int main()
{
    int n,m;
    cin >> n >> m;
    vvi g(n);
    vi comp, used(n, 0);
    while (m--){
        int a,b;
        cin >> a >> b;
        --a; --b;
        g[a].pb(b);
        g[b].pb(a);
    }
    vvi comps;
    for (int i=0; i<n; i++){
        comp = {};
        if (!used[i]) {
            dfs(i, g, used, comp);
            sort(begin(comp), end(comp));
            comps.pb(comp);
        }
    }
    cout << comps.size() << '\n';
    for (auto i:comps){
        cout << i.size() << '\n';
        for (auto &j:i){
            cout << j+1 << ' ';
        }
        cout << '\n';
    }
}
