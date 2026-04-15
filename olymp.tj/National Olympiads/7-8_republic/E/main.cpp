#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    ll b = pow(10, n);
    n = pow(10, n - 1);
    if (m <= n) cout << 0;
    else if (m >= b) cout << b - n;
    else cout << m - n;
    return 0;
}
