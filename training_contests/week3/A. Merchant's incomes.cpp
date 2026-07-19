#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n+1, 0), pref(n+1, 0);
    for (ll i = 1; i <= n; i++){
        cin >> a[i];
        pref[i] = pref[i-1] + a[i];
    }
    while (q--){
        ll l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l-1] << '\n';
    }
}