#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    while (k--) {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        int best = 0;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (a[mid] <= x) {
                best = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        int ans = a[best];
        if (best + 1 < n) {
            if (abs(1LL * a[best + 1] - x) < abs(1LL * a[best] - x)) {
                ans = a[best + 1];
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
