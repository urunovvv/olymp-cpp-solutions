#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool is_prime(ll n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    ll l,r;
    cin >> l >> r;

    ll answer = 0;
    ll left = (ll)ceil(sqrt(l));
    ll right = (ll)floor(sqrt(r));
    for (ll i = left; i <= right; i++) {
        if (is_prime(i)) {
            ll square = i * i;
            if (square >= l && square <= r) {
                answer++;
            }
        }
    }
    cout << answer << '\n';
    return 0;
}
