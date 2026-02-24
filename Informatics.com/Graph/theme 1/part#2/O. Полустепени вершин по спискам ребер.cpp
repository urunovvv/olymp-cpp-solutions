#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>>ans(n, {0, 0});
    vector<vector<int>>g(n, vector<int>(n, 0));
    for (int k=0; k<m; k++){
        int i, j;
        cin >> i >> j;
        i--; j--;
        g[i][j] = 1;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
        ans[i].ss += g[i][j];
        ans[j].ff += g[i][j];
        }
    }
    for (auto p:ans){
        cout << p.ff << '\n' << p.ss << '\n';
    }
}
