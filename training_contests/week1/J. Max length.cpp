#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll &i : v) cin >> i;
    ll sum = 0, ans = 0;
    for (ll i = 0, j = 0; i < n; i++){
        sum += v[i];
        while (sum > k) sum -= v[j++];
        ans = max(ans, i - j + 1);
    }
    cout << ans << endl;
}