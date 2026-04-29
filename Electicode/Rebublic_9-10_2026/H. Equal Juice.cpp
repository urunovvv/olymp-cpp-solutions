#include <bits/stdc++.h>
#define ll long long
using namespace std;

void urunov(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    unordered_map<ll, ll>um;
    ll pref = 0;
    bool f = false;
    for (ll i = 0; i < n; i++) {
        if ((i + 1) % 2 == 1) {
            pref += a[i];
        }
        else pref -= a[i];
        um[pref]++;
        if (um[pref] >= 2 || pref == 0) {
            f = true;
            break;
        }
    }
    cout << (f ? "YES\n" : "NO\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    while (t--) {
        urunov();
    }
    // return 0;
}