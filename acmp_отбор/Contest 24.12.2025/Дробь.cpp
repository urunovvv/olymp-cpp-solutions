#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ll n;
    cin >> n;
    ll a = (n - 1) / 2;
    while (a > 0) {
        if (gcd(a, n) == 1) {
            cout << a << " " << n - a << "\n";
            break;
        }
        a--;
    }
    return 0;
}
