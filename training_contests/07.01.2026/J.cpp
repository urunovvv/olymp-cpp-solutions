#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
    vector<vector<int>> dp(n, vector<int>(m, 1e9));
    vector<vector<int>> from(n, vector<int>(m, -1));
    for (int i = 0; i < n; i++) dp[i][0] = v[i][0];
    for (int j = 1; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (i - 1 >= 0) {
                int cur = dp[i - 1][j - 1] + v[i][j];
                if (cur < dp[i][j]) {
                    dp[i][j] = cur;
                    from[i][j] = i - 1;
                }
            }
            {
                int cur = dp[i][j - 1] + v[i][j];
                if (cur < dp[i][j]) {
                    dp[i][j] = cur;
                    from[i][j] = i;
                }
            }
            if (i + 1 < n) {
                int cur = dp[i + 1][j - 1] + v[i][j];
                if (cur < dp[i][j]) {
                    dp[i][j] = cur;
                    from[i][j] = i + 1;
                }
            }
        }
    }
    int row = 0;
    int ans = dp[0][m - 1];
    for (int i = 1; i < n; i++) {
        if (dp[i][m - 1] < ans) {
            ans = dp[i][m - 1];
            row = i;
        }
    }
    vector<int> path(m);
    for (int j = m - 1; j >= 0; j--) {
        path[j] = row + 1;
        row = from[row][j];
    }
    for (int x : path) cout << x << " ";
    cout << "\n" << ans;
}
