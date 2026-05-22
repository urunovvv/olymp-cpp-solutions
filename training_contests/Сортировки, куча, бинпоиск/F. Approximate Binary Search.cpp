#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll &i : a) cin >> i;
    while (k--) {
        ll x;
        cin >> x;
        ll l = 0, r = n - 1;
        ll i = 0;
        while (l <= r) {
            ll mid = l + (r - l) / 2;
            if (a[mid] <= x) {
                i = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        ll ans = a[i];
        if (i + 1 < n) {
            if (abs(a[i + 1] - x) < abs(a[i] - x)) {
                ans = a[i + 1];
            }
        }
        cout << ans << '\n';
    }
}