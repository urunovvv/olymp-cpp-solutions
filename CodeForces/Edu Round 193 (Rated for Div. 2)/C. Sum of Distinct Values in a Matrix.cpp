#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void urunov() {
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> a(x);
    for (ll i = 0; i < x; ++i) {
        cin >> a[i];
    }
    vector<ll> b(y);
    for (ll i = 0; i < y; ++i) {
        cin >> b[i];
    }
    ll sum = 0;
    ll i = x - 1;
    ll j = y - 1;
    ll cnt_a = 0;
    ll cnt_B = 0;
    ll cnt = 0;
    while (cnt < n + m - 1 and (i >= 0 || j >= 0)) {
        if (i >= 0 && j >= 0 && a[i] == b[j]) {
            sum += a[i];
            cnt++;
            i--;
            j--;
        } else if (j < 0 || (i >= 0 && a[i] > b[j])) {
            if (cnt_a < n) {
                sum += a[i];
                cnt_a++;
                cnt++;
            }
            i--;
        } else {
            if (cnt_B < m) {
                sum += b[j];
                cnt_B++;
                cnt++;
            }
            j--;
        }
    }
    cout << sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--) urunov();
    return 0;
}

// 7
// 1 3 3 3
// 1 2 3
// 1 2 3
// 2 2 2 2
// 1 4
// 2 3
// 2 2 1 1
// 1
// 1
// 4 1 1 5
// 5
// 1 2 3 4 5
// 1 1 2 2
// 1 2
// 1 2
// 7 2 9 1
// 1 2 3 4 5 6 7 8 9
// 9
// 9 9 12 12
// 1 3 4 6 7 9 10 12 13 15 16 18
// 2 3 5 6 8 9 11 12 14 15 17 18