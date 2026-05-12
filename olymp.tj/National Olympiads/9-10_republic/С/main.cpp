#include <bits/stdc++.h>
using namespace std;

int dfs(int x, int y, vector<string> &v, vector<vector<bool>> &visited) {
    int n = v.size();
    int m = v[0].size();
    visited[x][y] = true;
    int cnt = 1;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    for (int k = 0; k < 4; k++) {
        int nx = x + dx[k];
        int ny = y + dy[k];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
            if (v[nx][ny] == '1' && !visited[nx][ny]) {
                cnt += dfs(nx, ny, v, visited);
            }
        }
    }
    return cnt;
}
int main() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (q--) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        if (v[x][y] == '0') {
            cout << 0 << "\n";
            continue;
        }
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        int ans = dfs(x, y, v, visited);
        cout << ans << "\n";
    }
    return 0;
}
