#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(ll n) {
    if (n < 2) return false;
    if (n == 2 or n == 3) return true;
    if (n % 2 == 0 or n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 or n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    ll l,r;
    cin >> l >> r;
    ll cnt = 0;
    ll l1 = (ll)ceil(sqrt(l));
    ll r1 = (ll)floor(sqrt(r));
    for (ll i = l1; i <= r1; i++) {
        if (isPrime(i)) {
            ll sq = i * i;
            if (sq >= l and sq <= r) {
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}
