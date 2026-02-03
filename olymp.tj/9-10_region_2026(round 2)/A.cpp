#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll a,b;
    cin >> a >> b;
    if ((2*a - b) % 3 != 0 || (2*b - a) % 3 != 0) {
        cout << -1;
        return 0;
    }

    ll x = (2*a - b) / 3;
    ll y = (2*b - a) / 3;
    if (x < 0 || y < 0) {
        cout << -1;
    } else {
        cout << x << " " << y;
    }
}
