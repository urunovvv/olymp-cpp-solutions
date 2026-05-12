#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    using ll = long long;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> a(n);
        for (int i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v, --u, --v;
            a[u].emplace_back(v);
            a[v].emplace_back(u);
        }
        ll ans = 0;
        vector<int> sz(n, 1), dp(n); // initial subtree sizes and dp[i] = |S_i|
        auto dfs = [&] (auto &dfs, int v, int p) -> void{ // performing DFS in the tree
            for (int u : a[v]) {
                if (u != p) { // to avoid visiting parent again
                    dfs(dfs, u, v); // recursively visit subtree
                    dp[v] += dp[u]; // answer for subtree of v (merge)
                    sz[v] += sz[u]; // merge
                }
            }
            dp[v] += sz[v] >= k;
        };
        dfs(dfs, 0, -1); // arbitrary starting point
        auto reroot = [&] (auto &reroot, int v, int p) -> void{
            for (int u : a[v]) {
                if (u != p) {
                    int add = dp[v] - dp[u] - (n - sz[u] < k); // value of v other than subtree of u
                    dp[u] = add + (dp[u] + (sz[u] < k));
                    reroot(reroot, u, v); //continue rerooting
                    // Actually you don't need dp[v] for each subtree (because dp[u] cancels out), I did it for clarity.
                }
            }
        };
        reroot(reroot, 0, -1);
        cout << accumulate(dp.begin(), dp.end(), 0ll) << '\n'; // print the answer
    }
}
