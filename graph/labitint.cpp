#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1--, y1--, x2--, y2--;
    vector<pair<int,int>> pos[26];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ('a' <= a[i][j] && a[i][j] <= 'z') {
                pos[a[i][j] - 'a'].push_back({i, j});
            }
        }
    }
    vector<vector<int>> dist(n, vector<int>(m, 1e9));
    vector<bool> used(26, false);
    queue<pair<int,int>> q;
    if (a[x1][y1] == '#') {
        cout << -1 << '\n';
        return 0;
    }
    dist[x1][y1] = 0;
    q.push({x1, y1});
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (a[nx][ny] == '#') continue;

            if (dist[nx][ny] > dist[x][y] + 1) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
        if ('a' <= a[x][y] && a[x][y] <= 'z') {
            int c = a[x][y] - 'a';

            if (!used[c]) {
                used[c] = true;

                for (auto [nx, ny] : pos[c]) {
                    if (dist[nx][ny] > dist[x][y] + 1) {
                        dist[nx][ny] = dist[x][y] + 1;
                        q.push({nx, ny});
                    }
                }
            }
        }
    }

    if (dist[x2][y2] == 1e9) cout << -1 << '\n';
    else cout << dist[x2][y2] << '\n';

    return 0;
}