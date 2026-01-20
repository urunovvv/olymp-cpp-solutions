#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n, 0), dp(n, -1e9), p(n, -1);
    for (int i = 1; i <= n - 2; i++)
        cin >> v[i];
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        for (int j = max(0, i - k); j < i; j++) {
            if (dp[j] + v[i] > dp[i]) {
                dp[i] = dp[j] + v[i];
                p[i] = j;
            }
        }
    }
    cout << dp[n - 1] << '\n';
    vector<int> way;
    int cur = n - 1;
    while (cur != -1) {
        way.pb(cur);
        cur = p[cur];
    }
    reverse(way.begin(), way.end());
    cout << way.size() - 1 << '\n';
    for (int x : way)
        cout << x + 1 << ' ';
    return 0;
}
