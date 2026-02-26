#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>>g(n,vector<int>(n, 0));
    while (m--){
        int a,b;
        cin >> a >> b;
        --a; --b;
        g[a][b] = 1;
        g[b][a] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (g[i][j]) {
                for (int k = 0; k < n; k++) {
                    if (g[j][k] && !g[i][k]) {
                        cout << "NO";
                        return 0;
                    }
                }
            }
        }
    }

    cout << "YES";
}