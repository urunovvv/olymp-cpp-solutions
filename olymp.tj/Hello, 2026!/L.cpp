#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long dp[51];
    dp[1] = 3;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] * 2;
    }
    cout << dp[n] << '\n';
    return 0;
}
