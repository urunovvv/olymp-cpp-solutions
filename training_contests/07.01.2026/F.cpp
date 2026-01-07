#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define eb emplace_back
#define ff first
#define ss second
using namespace std;

int main()
{
    ll n,v,l, start = 0;
    cin >> n >> v >> l;
    vector<pair<ll,ll>>t(n);
    for (auto &x:t){
        cin >> x.ff >> x.ss;
    }
    sort(begin(t), end(t));
    ld total = 0;
    for (int i=0; i<n; i++){
        if (t[i].ss > l) break;
        total += (ld)(t[i].ss + (t[i].ff - start)/v/60);
        start = t[i].ff;
    }
    total += (l - start) / v / 60;
    cout << fixed << setprecision(2) << total;
    return 0;
}
