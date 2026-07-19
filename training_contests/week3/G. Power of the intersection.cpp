#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n + 1, vector<ll>(m + 1));
    vector<ll> rowSum(n + 1, 0), colSum(m + 1, 0);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> a[i][j];
            rowSum[i] += a[i][j];
            colSum[j] += a[i][j];
        }
    }
    ll ans = LLONG_MIN;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            ll power = rowSum[i] + colSum[j] - a[i][j];
            ans = max(ans, power);
        }
    }
    cout << ans << '\n';
    return 0;
}