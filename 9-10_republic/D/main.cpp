#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    vector <ll> v = {0};
    ll n;
    cin >> n;
    for (ll i=0; i<n; i++){
        ll op;
        cin >> op;
        if (op == 1){
            ll pos, x;
            cin >> pos >> x;
            v.insert(v.begin()+pos, x);
        }
        else{
            ll x;
            cin >> x;
            cout << v[x-1] << '\n';
        }
    }
    return 0;
}
