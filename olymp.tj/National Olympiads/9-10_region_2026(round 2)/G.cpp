#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, p;
    cin >> n >> p;
    vector<int> f(n), t(n);
    for (int i = 0; i < n; i++) {
        cin >> f[i] >> t[i];
    }
    vector<ll> dp(101, -1);
    dp[100] = 0;
    for (int i = 0; i < n; i++) {
        vector<ll>ndp(101, -1);
        for (int s = 1; s <= 100; s++) {
            if (dp[s] == -1) continue;
            if (s - f[i] >= 1) {
                ndp[s - f[i]] = max(ndp[s - f[i]], dp[s] + t[i]);
            }
            int ns = min(100, s + p);
            ndp[ns] = max(ndp[ns], dp[s]);
        }
        dp = ndp;
    }
    ll ans = 0;
    for (int s = 1; s <= 100; s++) {
        ans = max(ans, dp[s]);
    }
    cout << ans << '\n';
    return 0;
}
