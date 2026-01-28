#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));
    for (int i = 1; i <= n; i++) {
        dp[i][i] = a[i];
    }
    for (int x = n; x >= 1; x--) {
        for (int y = n; y >= 1; y--) {
            if (x == y) continue;
            int best;
            if (x + 1 <= n and y + 1 <= n)
                best = ( (x + y) % 2 == 0 ? max(dp[x + 1][y], dp[x][y + 1]) : min(dp[x + 1][y], dp[x][y + 1]) );
            else if (x + 1 <= n)
                best = dp[x + 1][y];
            else
                best = dp[x][y + 1];

            dp[x][y] = best;
        }
    }
    cout << dp[1][1];
    return 0;
}
