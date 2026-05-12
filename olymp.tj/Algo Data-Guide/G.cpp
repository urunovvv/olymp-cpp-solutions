#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end(), greater<ll>());
        vector<ll> v(n+1, 0);
        for (int i = 1; i <= n; ++i) v[i] = v[i-1] + a[i-1];
        bool b = false;
        for (int f = 1; f*2 < n; ++f) {
            ll fp = v[f];
            ll ip = v[n] - v[f];
            if (fp > ip) {
                b = true;
                break;
            }
        }
        cout << (b ? "YES\n" : "NO\n");
    }
    return 0;
}
