#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    map<ll, ll> mp;
    mp[0] = 1;
    ll sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        ans += mp[sum - k];
        mp[sum]++;
    }
    cout << ans << '\n';
    return 0;
}