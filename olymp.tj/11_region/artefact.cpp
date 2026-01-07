#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(vector<ll> &v) {
    ll ans = 0;
    size_t n = v.size(), i = 0;
    bool changed = true;
    while (i < n) {
        size_t n = v.size();
        if (n < 2) break;
        size_t idx = 0;
        size_t i = 0;
        size_t start = i;
        while (i < n && v[i] < v[i + 1]) {
            i++;
        }
        size_t len = i - start + 1;
        if (len >= 2) {
            ans++;
            i++;
        } else {
            vector<ll> l(v.begin(), v.begin()+start);
            vector<ll> r(v.begin()+i, v.end());
            v.clear();
            v.insert(v.end(), l.begin(), l.end());
            v.insert(v.end(), r.begin(), r.end());
            ans++;
            for (auto x : v){cout << x << ' ';}
            cout << '\n';
        }
    }
    return ans;
}

int main() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v) cin >> x;
    cout << solve(v) << '\n';
    return 0;
}
