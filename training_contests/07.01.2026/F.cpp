#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define eb emplace_back
#define ff first
#define ss second
using namespace std;

int main()
{
    ll n, v, l, start = 0;
    cin >> n >> v >> l;
    vector<pair<ll,ll>> t(n);
    for (auto &x : t){
        cin >> x.ff >> x.ss;
    }
    sort(t.begin(), t.end());
    ld total = 0;
    for (int i = 0; i < n; i++){
        total += (ld)(t[i].ff - start) * 60 / v;
        total += t[i].ss;
        start = t[i].ff;
    }
    total += (ld)(l - start) * 60 / v;
    cout << fixed << setprecision(2) << total;
    return 0;
}
