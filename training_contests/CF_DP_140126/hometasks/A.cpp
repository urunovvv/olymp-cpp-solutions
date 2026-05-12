#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    const int INF = 1e9;
    vector<vector<int>> dp(n, vector<int>(3, INF));
    //day 0
    dp[0][0] = 1; //rest
    if (a[0] == 1 || a[0] == 3) dp[0][1] = 0; //contest
    if (a[0] == 2 || a[0] == 3) dp[0][2] = 0; //sports

    for (int i = 1; i < n; i++) {
        //rest
        dp[i][0] = min({dp[i-1][0], dp[i-1][1], dp[i-1][2]}) + 1;
        //contest
        if (a[i] == 1 || a[i] == 3)
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
        //sports
        if (a[i] == 2 || a[i] == 3)
            dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
    }
    cout << min({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
    return 0;
}
