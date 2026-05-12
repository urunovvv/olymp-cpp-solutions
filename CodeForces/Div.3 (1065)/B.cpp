#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector<ll>v(n);
        for (auto &x:v) cin >> x;
        if (v[0] == -1) v[0] = v[n-1];
        if (v[n-1] == -1) v[n-1] = v[0];
        for (ll i=0; i<n; i++){
            if (v[i] == -1) v[i] = 0;
        }
        cout << abs(v[n-1] - v[0]) << '\n';
        for (auto &x:v){cout << x << ' ';}
        cout << '\n';
    }
    return 0;
}
