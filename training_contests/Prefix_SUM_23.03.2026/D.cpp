#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<ll>> a(n + 1, vector<ll>(m + 1));
    vector<vector<ll>> pref(n + 1, vector<ll>(m + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            pref[i][j] = a[i][j] + pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1];
        }
    }
    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int lx = min(x1, x2);
        int rx = max(x1, x2);
        int ly = min(y1, y2);
        int ry = max(y1, y2);
        ll ans = pref[rx][ry] - pref[lx - 1][ry] - pref[rx][ly - 1] + pref[lx - 1][ly - 1];
        cout << ans << '\n';
    }
    return 0;
}