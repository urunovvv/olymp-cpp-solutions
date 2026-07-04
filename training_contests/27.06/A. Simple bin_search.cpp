#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for (ll &i : v){
        cin >> i;
    }
    vector<ll> queries(q);
    for (ll &i : queries) cin >> i;
    for (ll x : queries){
        ll l = 0, r = n - 1;
        bool f = true;
        while (l < r){
            ll mid = (l + r) / 2;
            if (v[mid] == x){
                cout << "YES\n";
                f = false;
                break;
            }
            else if (v[mid] > x) r = mid - 1;
            else l = mid + 1; 
        }
        if (f) cout << (v[l] == x ? "YES\n" : "NO\n");
    }
}