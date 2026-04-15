#include <bits/stdc++.h>
using namespace std;

#define ll long long

void firuz()
{
    ll n;
    int x, y;
    cin >> n >> x >> y;
    vector<ll> a(x);
    for (int i = 0; i < x; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll cnt = 0;
    for (int i = 0; i < x; i++) {
        ll next = (i + 1 < x ? a[i + 1] : a[0] + n);
        if (next - a[i] == 2) {
            cnt++;
        }
    }
    cnt += x-2;
    cout << cnt << "\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) firuz();
    return 0;
}
