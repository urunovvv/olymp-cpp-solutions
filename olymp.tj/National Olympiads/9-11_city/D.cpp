#include <bits/stdc++.h>
#define ss second
#define ff first
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n), c(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> c[i];
    vector<pair<ll, ll>> candies(n);
    for (int i = 0; i < n; i++) candies[i] = {C[i], A[i]};
    sort(candies.begin(), candies.end());
    vector<ll> dp(n+1, 1e18);
    dp[0] = 0;
    for (auto &p : candies) {
        for (int k = n; k >= 1; k--) {
            if (dp[k-1] + p.ss <= p.ff) {
                dp[k] = min(dp[k], dp[k-1] + p.ss);
            }
        }
    }
    for (int k = n; k >= 0; k--) {
        if (dp[k] < 1e18) {
            cout << k << "\n";
            break;
        }
    }

    return 0;
}
