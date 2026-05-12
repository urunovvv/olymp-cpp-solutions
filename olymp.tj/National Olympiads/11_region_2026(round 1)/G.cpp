#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<ll> a(n);
    ll total = 0;
    for (int i = 0; i < n; ++i) {cin >> a[i]; total += a[i];}
    ll best = 1e5;
    for (int i = 0; i < n; ++i) {
        ll cur = 0;
        for (int j = 0; j < n; ++j) {
            if (j == i) continue;
            ll t = a[j] - 1;
            if (t < 0) t = 0;
            cur += t;
        }
        best = min(best, cur);
    }
    cout << best << "\n";
    return 0;
}