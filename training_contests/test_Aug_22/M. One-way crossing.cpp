#include <bits/stdc++.h>
using namespace std;
#define pb emplace_back
vector<int> chldrn(100, 1);
vector<vector<int>> graph(100);

int temp = 1;

int dfs(int start){
    for (int to : graph[start]){
        chldrn[start] += dfs(to);
    }
    temp = chldrn[start];
    return temp;
}

int main()
{
    int n, m, s;
    cin >> n >> m >> s;
    // graph.resize(n+1);
    // chldrn.resize(n+1, 1);
    for (int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        graph[u].pb(v);
    }
    cout << dfs(s);
}