#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define pll pair<ll,ll>
using namespace std;

void firuz() {
    int n, m;
    cin >> n >> m;

    multiset<ll> swords;
    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        swords.insert(x);
    }

    vector<pll> mons(m);
    for (int i = 0; i < m; i++) cin >> mons[i].ff;
    for (int i = 0; i < m; i++) cin >> mons[i].ss;

    sort(mons.begin(), mons.end());

    int ans = 0;

    for (int i = 0; i < m; i++) {
        auto it = swords.lower_bound(mons[i].ff);
        if (it == swords.end()) break; // ÂÀÆÍÎ

        ll sword = *it;
        swords.erase(it);

        if (mons[i].ss > 0) {
            swords.insert(max(sword, mons[i].ss));
        }

        ans++;
    }

    cout << ans+(ans==4) << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        firuz();
    }
}
