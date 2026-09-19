#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
void urunov()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    vector<ll> a_even, a_odd, b_even, b_odd;
    for (ll i = 0; i < n; i++){
        if (a[i] == '1' && i % 2 == 0) a_even.pb(i);
        if (b[i] == '1' && i % 2 == 0) b_even.pb(i);
        if (a[i] == '1' && i % 2 == 1) a_odd.pb(i);
        if (b[i] == '1' && i % 2 == 1) b_odd.pb(i);
    }
    if (a_even.size() != b_even.size() || a_odd.size() != b_odd.size()){
        cout << "-1\n";
        return;
    }
    ll ans = 0;
    for (ll i = 0; i < a_even.size(); i++){
        ans += abs(a_even[i] - b_even[i]) / 2;
    }
    for (ll i = 0; i < a_odd.size(); i++){
        ans += abs(a_odd[i] - b_odd[i]) / 2;
    }
    cout << ans << '\n';
}

signed main(){
    ll t;
    cin >> t;
    while (t--) urunov();
}