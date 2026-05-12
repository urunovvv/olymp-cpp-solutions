#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;
        if ((x + y) % 2 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
