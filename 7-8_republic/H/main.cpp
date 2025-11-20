#include <bits/stdc++.h>

using namespace std;

void dfs(int v, vector<vector<int>>& graph, vector<bool>& visited, long long &cnt) {
    visited[v] = true;
    cnt++;
    for (int to : graph[v]) {
        if (!visited[to]) {dfs(to, graph, visited, cnt);}
    }
}

int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>>graph(n+1);
    for (int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
    }
    int t;
    cin >> t;
    vector <bool>visited(n);
    long long cnt = -1;
    dfs(t, graph, visited, cnt);
    cout << cnt;
    return 0;
}
