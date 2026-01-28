#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> cnt(n+1, 0);
        for (int i = 0; i < n; ++i) {
            int h; cin >> h;
            cnt[h]++;
        }
        vector<int> v(n+1, 0);
        for (int i = 1; i <= n; ++i) {
            v[i] = v[i-1] + (cnt[i] >= 2 ? 1 : 0);
        }
        int ans = 0;
        for (int c = 1; c <= n; ++c) {
            if (cnt[c] == 0) continue;
            int pairs = v[c-1];
            int len = pairs * 2 + 1;
            ans = max(ans, len);
        }
        cout << ans << '\n';
    }
    return 0;
}
