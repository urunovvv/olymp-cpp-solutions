#include <bits/stdc++.h>
#define pb push_back
using namespace std;
vector<bool>vis(2e5, false);
vector<vector<int>>g;
void dfs(int v){
    vis[v] = true;
    for (int to : g[v]){
        if (!vis[to]) dfs(to);
    }
}

void urunov(){
    int n,m;
    cin >> n >> m;
    g.resize(n+1);
    while (m--){
        int a,b;
        cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }
    int comps = 0;
    for (int i=1; i<=n; i++){
        if (!vis[i]){
            dfs(i);
            comps++;
        }
    }
    cout << comps << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--){
        urunov();
    }
}