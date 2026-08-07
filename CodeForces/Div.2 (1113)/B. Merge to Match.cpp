#include <bits/stdc++.h>
using namespace std;
#define ll long long
void urunov() {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    multiset<ll> ms(a.begin(), a.end());
    for (int j = 0; j < m; j++) {
        auto it = ms.find(b[j]);
        if (it != ms.end()) {
            ms.erase(it);
        } else {
            auto u = ms.lower_bound(b[j]);
            if (u == ms.end()) {
                cout << "NO\n";
                return;
            }
            if (u == ms.begin()) {
                cout << "NO\n";
                return;
            }
            auto l = prev(u);
            ms.erase(l);
            ms.erase(u);
        }
    }
    if (ms.empty()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        urunov();
    }
    
    return 0;
}