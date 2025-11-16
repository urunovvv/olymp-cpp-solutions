#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>>v(n);
    pair<ll, ll>p={-1e9, 1e9};
    for (ll i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
        p.second = min(p.second, v[i].second);
        if (i > 0) p.first = max(p.first, v[i].first);
    }
    cout << p.first - p.second;
    return 0;
}
