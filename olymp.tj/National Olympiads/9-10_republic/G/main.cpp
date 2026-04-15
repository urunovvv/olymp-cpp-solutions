#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ll n;
    cin >> n;
    if ((n * (n + 1) / 2) % 2 == 1) {
        cout << -1;
        return 0;
    }
    ll need = (n * (n + 1) / 2) / 2;
    vector<ll> f, s;
    ll cur = 0;
    ll x = n;
    while (x > 0) {
        if (cur + x <= need) {
            f.pb(x);
            cur += x;
        } else {
            s.pb(x);
        }
        x--;
    }
    for (auto t : f) cout << t << ' ';
    cout << '\n';
    for (auto t : s) cout << t << ' ';
    return 0;
}
