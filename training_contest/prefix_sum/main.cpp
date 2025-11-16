#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ll n, q, sum = 0;
    cin >> n;
    vector<ll>v(n), s(n);
    s[0] = 0;
    for (ll i=0; i<n; i++){
        cin >> v[i];
        sum += v[i];
        s[i+1] = sum;
    }
    cin >> q;
    vector<ll> res(q);
    for (ll i=0; i<q; i++){
        ll l,r;
        cin >> l >> r;
        res[i] = s[r] - s[--l];
    }
    for (auto x : res){cout << x << ' ';}
    return 0;
}
