#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    string s;
    getline(cin, s);
    string str = "Happy New Year";
    int m = str.size();
    vector<ll> dp(m + 1, 0);
    dp[0] = 1;
    for (char c : s) {
        for (int j = m - 1; j >= 0; j--) {
            if (c == str[j]) {
                dp[j + 1] += dp[j];
            }
        }
    }
    cout << dp[m];
    return 0;
}
