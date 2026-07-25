#include <bits/stdc++.h>
using namespace std;
#define ll long long 

vector<vector<ll>> pref;

bool isZero(int x1, int y1, int x2, int y2){
    return pref[x2][y2] - pref[x1-1][y2] - pref[x2][y1-1] + pref[x1-1][y1-1] == 0;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m, 0));
    pref.resize(n+1, vector<ll>(m+1, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            pref[i+1][j+1] = pref[i][j+1] + pref[i+1][j] - pref[i][j] + a[i][j];
        }
    }
    ll cnt = 0;
    for (int x1=1; x1 <= n; x1++){
        for (int y1 = 1; y1 <= m; y1++){
            for (int x2 = x1; x2 <= n; x2++){
                for (int y2 = y1; y2 <= m; y2++){
                    cnt += isZero(x1, y1, x2, y2);
                }
            }
        }
    }
    cout << cnt << '\n';
}