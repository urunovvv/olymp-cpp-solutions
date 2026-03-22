#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m;
        cin >> n >> m;
        vector<vector<int>> g(n + 1);
        for (int i = 0; i < m; i++) {
            int v, u;
            cin >> v >> u;
            g[v].push_back(u);
            g[u].push_back(v);
        }
        vector<bool> color(n + 1), used(n + 1, false);
        ll ans = 0;
        for (int start = 1; start <= n; start++) {
            if (color[start]) continue;
            queue<int> q;
            q.push(start);
            used[start] = true; 
            color[start] = 0;
            ll cnt[2] = {1, 0};
            bool flag = true;
            while (!q.empty()) {
                int v = q.front();
                q.pop();
                for (int to : g[v]) {
                    if (color[to] == -1) {
                        used[to] = true;
                        color[to] = !color[v];
                        cnt[color[to]]++;
                        q.push(to);
                    } else if (color[to] == color[v]) {
                        flag = false;
                    }
                }
            }
            if (flag) {
                ans += max(cnt[0], cnt[1]);
            }
        }
        cout << ans << '\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}