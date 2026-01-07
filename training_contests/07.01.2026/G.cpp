#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main() {
    ll n, x, y;
    cin >> n >> x >> y;
    ll ans;
    if (x > y) swap(x, y);
    if (n == 1) {
    ans = x;
    } else {
        ll low = 0;
        ll high = n * x;
        ans = high;
        while (low <= high) {
            ll mid = low + (high - low) / 2;
            ll copies = x + mid / x + mid / y;
            if (copies >= n - 1) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
    }
    cout << ans;
    return 0;
}
