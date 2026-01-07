#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll &i : v){
        cin >> i;
    }
    sort(v.begin(), v.end());
    cout << v[n-1] << ' ' << v[n-2] << ' ' << v[n-3];
    return 0;
}