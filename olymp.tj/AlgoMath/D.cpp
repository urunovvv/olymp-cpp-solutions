#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll x, y, x2, y2;
    cin >> x >> y >> x2 >> y2;
    int dx[8] = {2,2,-2,-2,1,1,-1,-1};
    int dy[8] = {1,-1,1,-1,2,-2,2,-2};
    bool ok = false;
    for (int i = 0; i < 8; i++) {
        if (x + dx[i] == x2 && y + dy[i] == y2)
            ok = true;
    }
    for (int i = 0; i < 8; i++) {
        ll nx = x + dx[i];
        ll ny = y + dy[i];
        for (int j = 0; j < 8; j++) {
            if (nx + dx[j] == x2 && ny + dy[j] == y2)
                ok = true;
        }
    }
    if (ok) cout << "Abubakr";
    else cout << "Habibulloh";

    return 0;
}
