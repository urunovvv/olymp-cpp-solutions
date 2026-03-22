#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll sum = 0, same = 0;
    map<ll, ll> mp;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mp[a[i]]++;
        if (mp[a[i]] > 1) {
            same++;
        }
    }
    if (same > 1){
        cout << "NO";
        return 0;
    }
    if (same == 1) {
        for (ll i = 0; i < n; i++) {
            if (sum - a[i] % 2 != 0 && mp[a[i]] == 2) {
                cout << "YES";
                return 0;
            }
        }
    }else{
        for (ll i = 0; i < n; i++) {
            if (sum - a[i] % 2 != 0) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}