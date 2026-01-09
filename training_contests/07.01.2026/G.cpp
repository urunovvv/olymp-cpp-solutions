#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, x, y;
    cin >> n >> x >> y;
    ll mn = min(x, y);
    ll l = 0, r = mn * n;
    while (l < r) {
        ll mid = (l + r) / 2;
        ll copies = 0;
        if (mid >= mn) {
            ll t = mid - mn;
            copies = 1 + t/x + t/y;
        }
        if (copies >= n)
            r = mid;
        else
            l = mid + 1;
    }
    cout << l;
}

