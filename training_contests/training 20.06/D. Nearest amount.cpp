#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second

int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll &i : v) cin >> i;
    sort(v.begin(), v.end());
    ll dif = LLONG_MAX, ans = -1;
    int i = 0, j = n - 1;
    pair<ll, ll> p;
    while (i <= j){
        ll sum = v[i] + v[j];
        if (abs(sum - k) < dif){
            dif = abs(sum - k);
            ans = sum;
            if (sum < k) p.ff = sum;
            else p.ss = sum;
        }if (sum < k) i++;
        else if (sum > k) j--;
        else {
            cout << sum << endl;
            return 0;
        }
    }
    cout << min(p.ff, p.ss) << endl;
}