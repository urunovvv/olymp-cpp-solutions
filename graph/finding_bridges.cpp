#include <bits/stdc++.h>
#define eb emplace_back
using namespace std;
vector<vector<pair<int, int>>>g;
vector<bool>used(1e5, false);
vector<int>f(1e5), t_in(1e5), bridges;
int t = 1;
int cnt = 0;

void DFS(int from, int v){
    used[v] = true;
    t_in[v] = t++;
    f[v] = t_in[v];
    for (auto &p:g[v]){
        int to = p.first, edge_id = p.second;
        if (edge_id == from) continue;
        else if (used[to]){
            f[v] = min(f[v], t_in[to]);
        }
        else{
            DFS(edge_id, to);
            f[v] = min(f[v], f[to]);
            if (f[to] > t_in[v]) bridges.eb(edge_id);
        }
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    g.resize(n+1); t_in.resize(n+1); f.resize(n+1);
    for (int i=1; i<=m; i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back({b, i});
        g[b].push_back({a, i});
    }
    for (int i=1; i<=n; i++){
        if(!used[i]) DFS(-1, i);
    }
    cout << bridges.size() << '\n';
    for (int i:bridges)
        cout << i << ' ';
}
