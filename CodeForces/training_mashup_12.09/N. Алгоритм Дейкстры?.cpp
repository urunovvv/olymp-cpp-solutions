#include <bits/stdc++.h>
#define int long long
using namespace std;

const int INF = 1e18;

struct Edge {
    int to;
    int w;
};

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<vector<Edge>> g(n + 1);
    for (int i = 0; i < m; ++i) {
        int u, v;
        int w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    vector<int> dist(n + 1, INF);
    vector<int> path(n + 1, 0);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[1] = 0;
    pq.push({0, 1});
    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (d > dist[u]) continue;
        for (const auto& e : g[u]) {
            int v = e.to;
            int w = e.w;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                path[v] = u;
                pq.push({dist[v], v});
            }
        }
    }
    if (dist[n] == INF) {
        cout << -1 << "\n";
        return 0;
    }
    vector<int> res;
    for (int v = n; v != 0; v = path[v]) {
        res.push_back(v);
    }
    reverse(res.begin(), res.end());
    for (size_t i = 0; i < res.size(); ++i) {
        cout << res[i] << ' ';
    }
    cout << "\n";

    return 0;
}