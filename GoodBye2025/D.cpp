#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int m;
    cin >> m;
    vector<vector<ll>>v(2, vector<ll>(m)), dp(3, vector<ll>(m+1, 0));
    for (auto &x:v){
        for (auto &y:x) cin >> y;
    }
    for (int i=1; i<=m; i++){
        dp[0][i] = dp[1][i-1];
        dp[1][i] = max(dp[0][i-1], dp[2][i-1]) + v[0][i-1];
        dp[2][i] = dp[1][i-1] + v[1][i-1];
    }
    ll mx = 0;
    for (int i=0; i<3; i++){
        mx = max(mx, dp[i][m]);
    }
    cout << mx;
    return 0;
}
