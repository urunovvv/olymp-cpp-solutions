#include <bits/stdc++.h>
using namespace std;
#define pb emplace_back


vector<int> chldrn;
vector<vector<int>> graph;

int dfs(int start){
    for (int to : graph[start]){
        chldrn[start] += dfs(to);
    }
    return chldrn[start];
}

int main()
{
    int n, m, s;
    cin >> n >> m >> s;
    graph.resize(n+1);
    chldrn.resize(n+1, 1);
    for (int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        graph[u].pb(v);
    }
    dfs(s);
    cout << chldrn[s];
}