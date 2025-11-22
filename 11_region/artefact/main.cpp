#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(vector<ll> &v) {
    ll ans = 0;
    bool changed = true;
    while (changed) {
        changed = false;
        size_t n = v.size();
        if (n < 2) break;
        size_t idx = 0;
        for (ll i = 0; i < n;) {
            size_t start = i;
            while (i + 1 < n && v[i] < v[i + 1]) {
                i++;
            }
            size_t len = i - start + 1;
            if (len >= 2) {
                changed = true;
                ans++;
                i++;
            } else {
                v[idx++] = v[start];
                i++;
            }
        }
        v.resize(idx);
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
