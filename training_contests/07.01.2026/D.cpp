#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define eb emplace_back
using namespace std;
int main()
{
    ll n,m;
    cin >> n >> m;
    vll v(n);
    for (auto &x:v) cin >> x;
    sort(rbegin(v), rend(v));
    ll ans = 0, i=0;
    while(m-- and v[i] > 0){
        ans += v[i++];
    }
    cout << ans;
    return 0;
}
