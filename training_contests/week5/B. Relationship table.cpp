#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n+1, vector<int>(n + 1, 0));
    while (m--){
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    for (int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j) cout << graph[i][j] << ' ';
        cout << '\n'; 
    }
} 