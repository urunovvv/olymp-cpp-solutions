#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    vector <ll> v(n), res;
    for (ll i=0; i<n; i++){
        cin >> v[i];
    }
    vector<ll> temp(k);
    for (ll i=0; i<k; i++){temp[i] = v[i];}
    vector<ll>s = temp;
    sort(s.begin(), s.end());
    res.pb(s[k/2]);
    for (ll i=k; i<n; i++){
        temp[i % k] = v[i];
        s = temp;
        //for (auto x : s){cout << x << ' ';}cout << '\n';
        sort(s.begin(), s.end());
        res.pb(s[k/2]);
    }
    for (auto x : res){
        cout << x << ' ';
    }
    return 0;
}
