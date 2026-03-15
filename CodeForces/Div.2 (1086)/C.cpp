#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cout << fixed << setprecision(10);
    while (t--) {
        int n;
        cin >> n;
        vector<int> c(n + 1), p(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> c[i] >> p[i];
        }
        vector<ld> dp(n + 2, 0.0);
        for (int i = n; i >= 1; i--) {
            ld q = 1.0 - (ld)p[i] / 100.0;
            dp[i] = max(dp[i + 1], (ld)c[i] + q * dp[i + 1]);
        }
        cout << (double)dp[1] << '\n';
    }
    return 0;
}
