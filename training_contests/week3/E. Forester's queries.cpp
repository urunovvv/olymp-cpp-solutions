#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, q;
    cin >> n >> m >> q;
    vector<string> forest(n);
    vector<vector<int>> pref(n+1, vector<int>(m+1, 0));
    for (int i = 0; i < n; i++) {
        cin >> forest[i];
        for (int j = 0; j < m; j++) {
            pref[i+1][j+1] = pref[i][j+1] + pref[i+1][j] - pref[i][j] + (forest[i][j] == '1');
        }
    }
    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int result = pref[x2][y2] - pref[x1-1][y2] - pref[x2][y1-1] + pref[x1-1][y1-1];
        cout << result << '\n';
    }
}