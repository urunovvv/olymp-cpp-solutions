#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n, m;
    vector<vector<int>>a(n+1, vector<int>(m+1, 0)), pref(n+1, vector<int>(m+1, 0));
    for (int i=1; i<=n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
            pref[i][j] = a[i][j] + pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1];
        }
    }
    
}