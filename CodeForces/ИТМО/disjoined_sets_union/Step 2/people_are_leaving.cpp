#include <bits/stdc++.h>
using namespace std;

vector<int> p;

int find_parent(int x) {
    if (p[x] == x) return x;
    return p[x] = find_parent(p[x]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    p.resize(n + 2);
    for (int i = 1; i <= n + 1; i++)
        p[i] = i;

    while (m--) {
        char q;
        int x;
        cin >> q >> x;

        if (q == '-') {
            p[x] = find_parent(x + 1);
        } else {
            int res = find_parent(x);
            if (res > n) cout << -1 << '\n';
            else cout << res << '\n';
        }
    }
}
