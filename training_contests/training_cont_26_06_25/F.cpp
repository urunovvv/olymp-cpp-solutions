#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int dfs(int x, int y, vector<vector<int>> &v, vector<vector<bool>> &visited) {
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
            if (v[nx][ny] == 1 && !visited[nx][ny]) {
                cnt += dfs(nx, ny, v, visited);

            }
        }
    }
    return cnt;
}

int main() {
    int n, m, q;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<int>res;
    for (int x=0;x<n; x++){
        for (int y=0;y<m;  y++){
            if (v[x][y] == 0) {
                continue;
            }
            if (!visited[x][y]){
                int ans = dfs(x, y, v, visited);
                res.pb(ans);
            }
        }
    }
    sort(res.begin(), res.end());
    cout << res.size() << '\n';
    for (int e : res){
        cout << e << ' ';
    }
    return 0;
}
