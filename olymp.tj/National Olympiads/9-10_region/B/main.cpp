#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    map<ll, ll> cnt;
    for (auto x : a){
        cnt[x]++;
    }
    ll same = 0;
    for (auto& p : cnt) {
        ll c = p.second;
        same += c * (c - 1) / 2;
    }
    ll total = n * 1LL * (n - 1) / 2;
    cout << total - same << '\n';
    return 0;
}
