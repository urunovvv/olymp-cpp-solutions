#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    vector<int> f(n), t(n);
    for (int i = 0; i < n; i++) {
        cin >> f[i] >> t[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(101, -1));
    dp[0][100] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 100; j++) {
            if (dp[i][j] == -1) continue;
            int ns = min(100, j + p);
            dp[i + 1][ns] = max(dp[i + 1][ns], dp[i][j]);
            if (j - f[i] >= 1) {
                dp[i + 1][j - f[i]] = max(dp[i + 1][j - f[i]], dp[i][j] + t[i]);
            }
        }
    }
    int ans = *max_element(dp[n].begin(), dp[n].end());
    cout << ans;
    return 0;
}
