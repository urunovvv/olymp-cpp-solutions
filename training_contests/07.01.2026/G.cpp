#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    /*ll n, x, y;
    cin >> n >> x >> y;
    if (n == 1) {
        cout << min(x, y);
        return 0;
    }
    ll mn = min(x, y);
    ll num = (N - 1) * x * y;
    ll d = x + y;
    ll t2 = (num + d - 1) / d;

    cout << mn + t2;*/
    ll n, x, y;
    cin >> n >> x >> y;
    ll mn = min(x, y);
    ll l = 0, r = mn * n;
    while (l < r) {
        ll mid = (l + r) / 2;
        ll copies = 0;
        if (mid >= mn) {
            long long t = mid - mn;
            copies = 1 + t / x + t / y;
        }
        if (copies >= N)
            r = mid;
        else
            l = mid + 1;
    }
    cout << l;
}

