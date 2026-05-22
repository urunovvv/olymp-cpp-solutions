#include <bits/stdc++.h>
using namespace std;

#define ll long long
void urunov() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll &i : a) cin >> i;
    vector<ll>srt = a;
    sort(srt.begin(), srt.end());
    if (srt == a) {
        cout << "YES\n";
        return;
    }
    bool f = true;
    for (int i = 0; i + 2 < n; i++) {
        if (a[i] > a[i + 1] && a[i + 1] > a[i + 2]) {
            f = false;
        }
    }
    cout << (f ? "YES\n" : "NO\n");
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        urunov();
    }
    return 0;
}