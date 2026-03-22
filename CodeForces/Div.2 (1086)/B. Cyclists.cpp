#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll sum_stay(vector<int> v, int k) {
    if (k <= 0) return 0;
    sort(v.begin(), v.end(), greater<int>());
    ll s = 0;
    for (int i = 0; i < min((int)v.size(), k); i++) s += v[i];
    return s;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k, p, m;
        cin >> n >> k >> p >> m;
        vector<int> a(n + 1);
        for (int i=1; i<=n; i++) cin >> a[i];
        int win = a[p];
        ll trash_cards = 0;
        if (p > k) {
            vector<int> pref;
            ll sum_pref = 0;
            for (int i = 1; i < p; i++) {
                pref.push_back(a[i]);
                sum_pref += a[i];
            }
            ll cnt = sum_stay(pref, k - 1);
            trash_cards = sum_pref - cnt;
        }
        ll first = trash_cards + win; // полная цена розыгрыша
        if (first > m) {
            cout << 0 << '\n';
            continue;
        }
        // Стоимость каждого следующего розыгрыша
        vector<int> other;
        ll sumOther = 0;
        for (int i = 1; i <= n; i++) {
            if (i == p) continue;
            other.push_back(a[i]);
            sumOther += a[i];
        }
        ll cnt = sum_stay(other, k - 1);
        ll cycle = sumOther - cnt;
        ll cycle_price = cycle + win;
        ll ans = 1 + (m - first) / cycle_price;
        cout << ans << '\n';
    }
    return 0;
}
