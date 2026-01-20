#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> dp(n, vector<int>(m));
    vector<vector<char>> p(n, vector<char>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    dp[0][0] = a[0][0];
    for (int j = 1; j < m; j++) {
        dp[0][j] = dp[0][j-1] + a[0][j];
        p[0][j] = 'R';
    }
    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i-1][0] + a[i][0];
        p[i][0] = 'D';
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (dp[i-1][j] > dp[i][j-1]) {
                dp[i][j] = dp[i-1][j] + a[i][j];
                p[i][j] = 'D';
            } else {
                dp[i][j] = dp[i][j-1] + a[i][j];
                p[i][j] = 'R';
            }
        }
    }
    string path;
    int i = n - 1, j = m - 1;
    while (i > 0 || j > 0) {
        path += p[i][j];
        if (p[i][j] == 'D') i--;
        else j--;
    }
    reverse(path.begin(), path.end());
    cout << dp[n-1][m-1] << '\n';
    cout << path << '\n';
    return 0;
}
