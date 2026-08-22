#include <bits/stdc++.h>
using namespace std;
#define pb emplace_back

const int SIZE = 2e5+1;

vector<int>vis(SIZE, 0);
vector<vector<int>> graph(SIZE);
bool flag = false;
void dfs(int start) { // based on DFS
    vis[start] = 1;
    for (int to : graph[start]){
    	if (vis[to] == 1)
	    flag = true;
	else if (vis[to] == 0) dfs(to);
    }
    vis[start] = 2;
}

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }
    for (int i = 1; i <= n; i++){
        if (vis[i] == 0){
	    flag = false;
	    dfs(i);
	    if (flag){
            	cout << "YES\n";
            	return 0;
	    }
        }
    }
    cout << "NO\n";
}
