#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
using namespace std;

int main()
{
    ll n;
    map<string, ll>cnt;
    cin >> n;
    for (ll i=0; i<n; i++){
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        cnt[s]++;
    }
    ll ans = 0;
    for (auto &p:cnt){
        ll temp = p.ss;
        ans += (temp*(temp-1))/2;
    }
    cout << ans;
    return 0;
}
