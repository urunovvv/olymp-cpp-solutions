#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, m, h;
    cin >> n >> m >> h;

    vector<ll> l(n), p(m);
    for (ll &x : l) cin >> x;
    for (ll &x : p) cin >> x;

    sort(l.begin(), l.end(), greater<ll>());
    sort(p.begin(), p.end(), greater<ll>());

    ll ans = 0;
    int t = min(n, m);
    for (int i = 0; i < t; i++) {
        ans += min(l[i], p[i] * h);
    }
    cout << ans;
    return 0;
}
