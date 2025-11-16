#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    ///cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll>v(n),sum(n);
    ll cur=0;
    for (ll i=0; i<n; i++){
        cin >> v[i];
        cur += v[i];
        sum[i] = cur;
    }
    ll q;
    cin >> q;
    vector<ll>res(q);
    for (ll i=0; i<q; i++){
        ll r, l;
        cin >> l >> r;
        res[i] = sum[r] - sum[l-1];
    }
    for (auto x : res){cout << x << ' ';}
    return 0;
}
