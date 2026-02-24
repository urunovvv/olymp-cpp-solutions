#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>>ans(n, {0, 0});
    vector<vector<int>>g(n, vector<int>(n, 0));
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> g[i][j];
            ans[i].ss += g[i][j];
            ans[j].ff += g[i][j];
        }
    }
    vector<int>istok, stok;
    for (int i=0; i<n; i++){
        if (ans[i].ss == 0){
            stok.push_back(i+1);
        }
        if (ans[i].ff == 0) istok.push_back(i+1);
    }
    sort(stok.begin(), stok.end());
    sort(istok.begin(), istok.end());
    cout << istok.size() << '\n';
    for (int i:istok) cout << i << '\n';
    cout << stok.size() << '\n';
    for (int i:stok) cout << i << '\n';
}
