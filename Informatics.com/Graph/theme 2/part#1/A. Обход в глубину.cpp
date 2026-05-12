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
    int n, x;
    cin >> n >> x;
    --x;
    vvi graph(n);
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            int a; cin >> a;
            if(a) graph[i].pb(j);
        }
    }
    vi comp;
    vi visited(n, 0);
    dfs(x, graph, visited, comp);
    cout << comp.size() << '\n';
    //for (int i:comp) cout << i << ' ';
}