#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> f(n+1);
        for (int i = 1; i <= n; ++i) cin >> f[i];
        vector<ll> a(n+1, 0);
        if (n == 2) {
            ll s = f[1] + f[2];
            a[1] = (f[2] - f[1] + s) / 2;
            a[2] = s - a[1];
        } else{
            for (int i = 2; i <= n-1; ++i) {
                a[i] = (f[i+1] - 2*f[i] + f[i-1]) / 2;
            }
            ll s = (f[1] + f[n]) / (n - 1);
            a[1] = (f[2] - f[1] + s) / 2;
            a[n] = (f[n-1] - f[n] + s) / 2;
        }
        for (int i = 1; i <= n; ++i) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
