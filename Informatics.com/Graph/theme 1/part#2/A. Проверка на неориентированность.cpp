#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> g(n, vector<int>(n));
    for (auto &i : g)
        for (auto &j : i)
            cin >> j;
    for (int i = 0; i < n; i++) {
        if (g[i][i] != 0) {
            cout << "NO\n";
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (g[i][j] != g[j][i]) {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
}
