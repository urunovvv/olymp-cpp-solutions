#include <bits/stdc++.h>
using namespace std;

vector<bool> usd(2e5+2, false);
vector<vector<int>>g;
int start, fin;
bool can_reach(int v, int u){
    usd[v] = true;
    for (int to : g[v]){
        if (!usd[to]) can_reach(to, fin);
    }
    return (usd[fin] ? true : false);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    g.resize(n+1);
    while (m--){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
    }
    cin >> start >> fin;
    cout << (can_reach(start, fin) ? "YES" : "NO");
}
