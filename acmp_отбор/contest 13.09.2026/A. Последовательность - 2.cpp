#include <bits/stdc++.h>
using namespace std;
#define pb emplace_back

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    if (n <= 2) {
        cout << n << "\n";
        for (int i : a) cout << i << ' ';
        cout << "\n";
        return 0;
    }
    vector<int> pref_mx(n);
    pref_mx[0] = a[0];
    for (int i = 1; i < n; i++) {
        pref_mx[i] = max(pref_mx[i - 1], a[i]);
    }
    vector<int> suf_mx(n);
    suf_mx[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suf_mx[i] = max(suf_mx[i + 1], a[i]);
    }
    vector<int> res = {a[0]};
    for (int i = 1; i < n; i++) {
        if (i == n - 1) {
            res.pb(a[i]);
            break;
        }
        if (a[i] >= pref_mx[i - 1] || a[i] >= suf_mx[i + 1]) {
            res.pb(a[i]);
        }
    }
    cout << res.size() << "\n";
    for (int i : res) cout << i << ' ';
    cout << "\n";
    return 0;
}