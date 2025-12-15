#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (auto &x : v) cin >> x;
        if (n == 1) {
            if (v[0] <= 1) cout << "YES\n";
            else cout << "NO\n";
            continue;
        }
        sort(v.begin(), v.end(), greater<ll>());
        ll mx = v[0];
        ll smx = v[1];
        if (mx <= smx + 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
