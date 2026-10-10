#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    unordered_map<int, int> m;
    m[0] = 1;
    int pref = 0, ans = 0;
    for (int x : a) {
        pref += x;
        ans += m[pref - k];
        m[pref]++;
    }
    cout << ans << '\n';
    return 0;
}
