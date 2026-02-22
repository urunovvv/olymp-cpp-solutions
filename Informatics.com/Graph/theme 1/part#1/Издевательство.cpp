#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    ll best = 1e9;
    int x,y,z;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                ll sum = a[i][j] + a[i][k] + a[j][k];
                if (sum < best) {
                    best = sum;
                    x = i+1;
                    y = j+1;
                    z = k+1;
                }
            }
        }
    }
    cout << x << ' ' << y << ' ' << z << "\n";
    return 0;
}
