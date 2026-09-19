#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    multiset<int> m;
    int l = 0;
    int ans = 0;
    for (int r = 0; r < n; r++) {
        m.insert(v[r]);
        while (!m.empty() && (*m.rbegin() - *m.begin() > k)) {
            m.erase(m.find(v[l]));
            l++;
        }
        ans += m.size();
    }

    cout << ans << "\n";

    return 0;
}