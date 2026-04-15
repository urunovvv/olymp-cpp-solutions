#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll k = sqrt(n);
    if (k * k < n) k++;
    ll prev = (k - 1) * (k - 1);
    ll hms = n - prev;
    ll r, c;
    if (k % 2 == 0) {
        if (hms <= k) {
            r = hms;
            c = k;
        } else {
            r = k;
            c = k - (hms - k);
        }
    } else {
        if (hms <= k) {
            r = k;
            c = hms;
        } else {
            r = k - (hms - k);
            c = k;
        }
    }
    cout << r << ' ' << c;
    return 0;
}
