#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int n = s.size();
        vector<ll>dp(n,0);
        dp[0] = 1;
        dp[1] = 1 + (s[1] != s[0]);
        for (int i=2; i<n; i++){
            dp[i] += dp[i-1];
            if (s[i] != s[i-1]) dp[i] += dp[i-2];
        }
        cout << dp[n-1] << '\n';
    }
}
