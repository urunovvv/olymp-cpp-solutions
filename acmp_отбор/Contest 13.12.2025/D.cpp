#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,s;
    cin >> n >> s;
    vector<ll>v(n);
    for (ll &i : v) cin >> i;
    sort(v.begin(), v.end());
    ll sum=0, i=0, cnt = 0;
    while(sum < s and i<n){
        sum += v[i];
        cnt++;
        i++;
    }
    if (sum > s) cnt--;
    cout << cnt;
    return 0;
}
