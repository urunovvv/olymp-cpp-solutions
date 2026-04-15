#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n,v,k;
    cin >> n >> v >> k;
    ll ans = 0;
    for (ll d = 1; d <= n; d++) {
        ll melt = (d - 1) * k;
        if (melt >= v) {
            cout << "NO\n";
            return 0;
        }
        ans += (v - melt);
    }
    cout << "YES " << ans << "\n";
    return 0;
}
