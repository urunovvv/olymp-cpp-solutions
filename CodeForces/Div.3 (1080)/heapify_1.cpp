#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin() + 1, b.end());
        vector<vector<int>> groups(n + 1);
        for (int i = 1; i <= n; ++i) {
            int x = i;
            while (x % 2 == 0) x /= 2;
            groups[x].push_back(i);
        }
        bool f = true;
        for (int x = 1; x <= n; ++x) {
            if (groups[x].empty()) continue;
            vector<int> cur, need;
            for (int pos : groups[x]) {
                cur.push_back(a[pos]);
                need.push_back(b[pos]);
            }
            sort(cur.begin(), cur.end());
            sort(need.begin(), need.end());
            if (cur != need) { f = false; break; }
        }
        cout << (f ? "YES\n" : "NO\n");
    }
    return 0;
}
