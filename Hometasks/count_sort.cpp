#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, mx = -2e5;
    cin >> n;
    vector<ll>v(n);
    for (auto&i:v){
        cin >> i;
        mx = max(i, mx);
    }
    vector<ll>cnt(mx+1, 0);
    for (auto &i:v){
        cnt[i]++;
    }
    for (ll i=0; i<mx+1; i++){
        if (!cnt[i]) continue;
        while(cnt[i]) {
            cout << i << ' ';
            cnt[i]--;
        }
    }
}
