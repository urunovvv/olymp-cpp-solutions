#include <bits/stdc++.h>
using namespace std;

int main() {
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    int res = (xb - xa) * (yc - ya) - (yb - ya) * (xc - xa);
    if (res > 0) {
        cout << "LEFT";
    } else if (res < 0) {
        cout << "RIGHT";
    } else {
        cout << "BOTH";
    }
    return 0;
}
