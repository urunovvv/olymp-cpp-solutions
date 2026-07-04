#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second

int main(){
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    unordered_map<ll, ll> mp;
    for (ll &i : v) cin >> i;
    int ans = 0;
    for (int i=0; i< n; i++){
        ans += mp[x - v[i]];
        mp[v[i]]++;
    }
    cout << ans << endl;
}