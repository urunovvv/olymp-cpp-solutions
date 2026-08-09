#include <bits/stdc++.h>
using namespace std;
#define pb emplace_back

const int SIZE = 2e5 + 1;

vector<int> subordinates(SIZE, 1);
vector<vector<int>> graph(SIZE);

int dfs(int start){
    for (int to : graph[start]){
        subordinates[start] += dfs(to);
    }
    return subordinates[start];
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++){
        int u, v;
        cin >> u >> v;
        graph[u].pb(v);
    }
    dfs(1);
    cout << n << ' ';
    for (int i = 2; i <= n; i++) cout << subordinates[i] << ' ';
}