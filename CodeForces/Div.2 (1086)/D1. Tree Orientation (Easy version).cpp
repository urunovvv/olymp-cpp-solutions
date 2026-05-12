#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<string> s(n);
        for (int i = 0; i < n; i++) cin >> s[i];
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (s[i][i] != '1') flag = false;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && s[i][j] == '1' && s[j][i] == '1') {
                    flag = false;
                }
            }
            if (!flag) break;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (s[i][j] == '1') {
                    for (int k = 0; k < n; k++) {
                        if (s[j][k] == '1' && s[i][k] == '0') {
                            flag = false;
                            break;
                        }
                    }
                }
                if (!flag) break;
            }
            if (!flag) break;
        }
        if (!flag) {
            cout << "No\n";
            continue;
        }
        vector<pair<int,int>> edges;
        vector<vector<int>> g(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j || s[i][j] == '0') continue;
                bool b = true;
                for (int k = 0; k < n; k++) {
                    if (k == i || k == j) continue;
                    if (s[i][k] == '1' && s[k][j] == '1') {
                        b = false;
                        break;
                    }
                }
                if (b) {
                    edges.push_back({i + 1, j + 1});
                    g[i].push_back(j);
                    g[j].push_back(i);
                }
            }
        }
        if ((int)edges.size() != n - 1) {
            cout << "No\n";
            continue;
        }
        vector<int>used(n, 0);
        queue<int> q;
        q.push(0);
        used[0] = 1;
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            for (int to : g[v]) {
                if (!used[to]) {
                    used[to] = 1;
                    q.push(to);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (!used[i]) flag = false;
        }
        if (!flag) {
            cout << "No\n";
            continue;
        }
        cout << "Yes\n";
        for (auto &[x, y] : edges) {
            cout << x << ' ' << y << '\n';
        }
    }

    return 0;
}
