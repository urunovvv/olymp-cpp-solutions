#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int step = 1; step <= 3; step++) {
            int j = i - step;
            if (j < 0) continue;
            if (s[i - 1] == '0') {
                dp[i] += dp[j];
            } else {
                if (j == 0 or s[j - 1] == '0') {
                    dp[i] += dp[j];
                }
            }
        }
    }
    cout << dp[n] << '\n';
    return 0;
}
