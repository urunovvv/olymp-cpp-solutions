#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll w, h, q;
    cin >> w >> h >> q;
    vector<ll> queries(q);
    for (ll &i : queries) cin >> i;
    for (ll x : queries){
        ll ans = pow(max(w, h), 2);
        ll l = 1, r = pow(max(w, h), 2);
        while (l < r){
            ll mid = (l + r) / 2;
            if ((mid / w) * (mid / h) >= x){
                ans = mid;
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        
        cout << ans << ' ';
    }
    return 0;
    
}