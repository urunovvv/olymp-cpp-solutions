#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    if (m > n) {
        cout << 0 << '\n';
        return 0;
    }
    ll a = n * (n - 1) / 2;
    ll ans;
    if (n % 2 == 1) ans = a + m;
    else ans = a + (n - m + 1);
    cout << ans << '\n';
    return 0;
}
