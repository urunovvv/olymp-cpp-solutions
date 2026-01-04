#include <bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>>dnts(n);
    for (auto &d : dnts){
        cin >> d.ff >> d.ss;
    }
    sort(dnts.rbegin(), dnts.rend());
    ll mx=1, cur = 1;
    for (ll i=1; i<n; i++){
        if (dnts[i].ss <= dnts[i-1].ss) cur++;
        else cur =1;
        if (cur > mx) mx = cur;
    }
    cout << mx << " \n";
}
