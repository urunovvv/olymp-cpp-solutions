#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> g;
vector<int> dist, from;
vector<int> path;
int x, y;
void bfs() {
    queue<int> q;
    dist[x] = 1;
    from[x] = x;
    q.push(x);
    while (!q.empty()) {
        int t = q.front();
        q.pop();
        for (int i : g[t]) {
            if (dist[i] == 0) {
                dist[i] = dist[t] + 1;
                from[i] = t;
                q.push(i);
            }
        }
    }
    if (dist[y] == 0) {
        cout << -1 << '\n';
        return;
    }
    cout << dist[y] - 1 << '\n';
    for (int v = y; v != x; v = from[v]) {
        path.push_back(v);
    }
    path.push_back(x);
    reverse(path.begin(), path.end());
    for (int v : path) {
        cout << v << ' ';
    }
    cout << '\n';
}

int main() {
    int n, m;
    cin >> n >> m;
    g.resize(n + 1);
    dist.assign(n + 1, 0);
    from.assign(n + 1, 0);
    while (m--) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for (auto &i : g) {
        sort(i.begin(), i.end());
    }
    cin >> x >> y;
    bfs();
}