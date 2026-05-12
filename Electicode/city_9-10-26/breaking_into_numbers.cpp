#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (ll &i:a) cin >> i;
        ll last = -1;
        bool b = true;
        for (int i = 0; i < n && b; i++) {
            if (a[i] < 10) {
                if (a[i] < last) b = false;
                else last = a[i];
            } else {
                string s = to_string(a[i]);
                bool good = true;
                for (int j = 0; j + 1 < s.size(); j++)
                    if (s[j] > s[j + 1]) good = false;
                bool take_num = (a[i] >= last);
                bool take_dig = (good && (s[0] - '0') >= last);
                if (!take_num && !take_dig) b = false;
                else if (take_dig) last = s[s.size()-1] - '0';
                else last = a[i];
            }
        }
        cout << (b ? "YES\n" : "NO\n");
    }
}
