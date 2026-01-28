#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int best = 1;
        int cur = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i-1] <= k) {
                cur++;
            } else {
                cur = 1;
            }
            if (cur > best) best = cur;
        }

        cout << (n - best) << '\n';
    }
    return 0;
}
