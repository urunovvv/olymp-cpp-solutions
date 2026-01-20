#include <bits/stdc++.h>
#define pb emplace_back
#define len size()
#define ll long long
using namespace std;

ll inv_count = 0;

vector<ll> merg(vector<ll> a, vector<ll> b) {
    vector<ll> res;
    ll i = 0, j = 0;
    while(i < a.len || j < b.len) {
        if (j == b.len) {
            res.pb(a[i]); i++;
        } else if (i == a.len) {
            res.pb(b[j]); j++;
        } else if (a[i] <= b[j]) {
            res.pb(a[i]); i++;
        } else {
            inv_count += (a.len - i);
            res.pb(b[j]); j++;
        }
    }
    return res;
}

vector<ll> merge_sort(vector<ll> a) {
    if (a.len <= 1) return a;
    ll mid = a.len / 2;
    vector<ll> l(a.begin(), a.begin() + mid);
    vector<ll> r(a.begin() + mid, a.end());

    l = merge_sort(l);
    r = merge_sort(r);

    return merg(l, r);
}

int main() {
    ll n;
    if (!(cin >> n)) return 0;
    vector<ll> v(n);
    for (auto &i : v) cin >> i;
    merge_sort(v);
    cout << inv_count << '\n';
    return 0;
}
