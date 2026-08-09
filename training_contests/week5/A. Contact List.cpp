#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n+1);
    while (m--){
        int a, b;
        cin >> a >> b;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    for (int i = 1; i <= n; ++i){
        printf("%d: ", i);
        sort(graph[i].begin(), graph[i].end());
        for(int j : graph[i]) cout << j << ' ';
        cout << '\n'; 
    }
} 