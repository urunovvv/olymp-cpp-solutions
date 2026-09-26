#include <bits/stdc++.h>
using namespace std;

void sol(){
    int n; char c;
    cin >> n >> c;
    string s;
    cin >> s;
    int ans = n - (n % 2);
    for (int i = 0; i < n / 2; i++) {
        if (s[i] == s[n - 1 - i]){
            ans -= 2;
        }else{
            ans -= (s[i] == c + s[n - 1 - i] == c);
        }
    }
    cout << ans << '\n';
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) sol();
}
