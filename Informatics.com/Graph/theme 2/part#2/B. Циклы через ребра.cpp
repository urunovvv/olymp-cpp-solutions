#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>g;
vector<bool>used(1e5, false);
vector<int>f(1e5), t_in(1e5);
int t = 1;
int bridges = 0;

void DFS(int from, int v){
    used[v] = true;
    t_in[v] = t++;
    f[v] = t_in[v];
    for (auto &to : g[v]){
        if (to == from) continue;
        else if (used[to]){
            f[v] = min(f[v], t_in[to]);
        }
        else{
            DFS(v, to);
            f[v] = min(f[v], t_in[to]);
            if (t_in[v] < f[to]) bridges++;
        }
    }
}

int main(){
    int m;
    cin >> n >> m;
    g.resize(n+1); t_in.resize(n+1); f.resize(n+1);
    while (m--){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for (int i=1; i<=n; i++){
        if (!used[i]) DFS(i, -1);
    }
    cout << n - bridges << '\n';
    return 0;
}
