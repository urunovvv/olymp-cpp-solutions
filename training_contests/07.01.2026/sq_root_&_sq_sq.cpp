#include <bits/stdc++.h>
using namespace std;
using ld = long double;

int main() {
    ld c;
    cin >> c;
    ld l = 0, r = 1e6;
    for (int i = 0; i < 100; i++) {
        ld mid = (l + r) / 2.0;
        if (mid * mid + sqrt(mid) >= c) {
            r = mid;
        } else {
            l = mid;
        }
    }
    cout << fixed << setprecision(6) << r << '\n';
    return 0;
}
