#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define int long long

// ifstream fin("test.txt");

void urunov()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> triads;
    for (int &i : a) cin >> i;
    unordered_map<int, int> mp;
    int ans = 0LL;
    for (int i = 0; i < n - 4; i++){
        int cur = a[i] + a[i + 2] - a[i + 4];
        ans += mp[cur];
        if (i >= 2) ans -= triads[i - 2] == cur;
        if (i >= 4) ans -= triads[i - 4] == cur;
        mp[cur]++;
        triads.push_back(cur);
    }
    cout << ans << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) urunov();
}