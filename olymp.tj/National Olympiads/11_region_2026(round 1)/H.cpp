#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n+1);
    for(int i = 1; i <= n; ++i) cin >> a[i];
    ll ans = 0;
    for(int i = 1; i <= n; i += k) {
        ans += max(0LL, a[i]);
    }
    cout << ans << '\n';
    return 0;
}