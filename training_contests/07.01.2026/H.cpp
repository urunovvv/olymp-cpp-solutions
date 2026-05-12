#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
    }
    int k;
    cin >> k;
    ll l = mx, r = sum, ans = sum;
    while (l <= r) {
        ll mid = (l + r) / 2;
        ll cur = 0, cnt = 1;
        for (int i = 0; i < n; i++) {
            if (cur + a[i] <= mid)
                cur += a[i];
            else {
                cnt++;
                cur = a[i];
            }
        }
        if (cnt <= k) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
