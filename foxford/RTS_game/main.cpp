#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
using namespace std;

ll dist(pair<ll, ll> a, pair<ll, ll> b) {
    return (a.ff - b.ff) * (a.ff - b.ff) + (a.ss - b.ss) * (a.ss - b.ss);
}

int main() {
    freopen("input.txt", "r", stdin);
    ll n, r;
    pair<ll,ll> fc, sc;
    cin >> fc.ff >> fc.ss >> sc.ff >> sc.ss >> n >> r;
    vector<pair<ll,ll>> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i].ff >> v[i].ss;
    ll only_fc = 0, only_sc = 0, outside = 0;
    ll r2 = r * r;
    for (auto x : v) {
        ll d1 = dist(x, fc);
        ll d2 = dist(x, sc);
        bool in_fc = d1 <= r2;
        bool in_sc = d2 <= r2;
        if (in_fc && in_sc) {
            if (d1 < d2) only_fc++;
            else only_sc++;
        } else if (in_fc && !in_sc) only_fc++;
        else if (!in_fc && in_sc) only_sc++;
        else outside++;
    }
    cout << only_fc << " " << only_sc << " " << outside;
    return 0;
}
