#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n,m, x1, y1, x2, y2;
    cin >> n >> m >> x1 >> y1 >> x2 >> y2;
    if ((abs(x2 - x1) == n && abs(y2 - y1) == m) || (abs(x2 - x1) == m && abs(y2 - y1) == n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
