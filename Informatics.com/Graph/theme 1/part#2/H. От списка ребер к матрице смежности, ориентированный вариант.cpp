#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, u, v;
    cin >> n >> m;
    vector<vector<int>>g(n, vector<int>(n, 0));
    for (int i=0; i<m; i++){
        cin >> u >> v;
        --u; --v;
        g[u][v] = 1;
    }
    for(auto i:g){
        for (int j:i){
            cout << j << ' ';
        }
        cout << '\n';
    }
}
