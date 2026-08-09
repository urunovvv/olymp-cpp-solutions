#include <bits/stdc++.h>
using namespace std;
#define pb emplace_back


vector<bool>visited(1e5+67, false);
vector<vector<int>> graph(1e5+67);
void dfs(int i, int &comp_size){
    comp_size++;
    visited[i] = true;
    for (int x : graph[i]){
        if (!visited[x]) dfs(x, comp_size);
    }
}

bool isTree(int n, int m){
    int comp_size = 0;
    dfs(1, comp_size);
    bool is_tree = comp_size == n and m == n - 1;
    return is_tree; 
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        int u, v;
        cin >> u >> v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    cout << (isTree(n, m) ? "YES" : "NO");
}