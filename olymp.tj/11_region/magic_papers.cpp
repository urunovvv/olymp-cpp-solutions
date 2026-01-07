#include <bits/stdc++.h>
#define ll long long
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
    ll answer = 0;
    for (auto &p:cnt){
        ll temp = p.second;
        answer += (temp*(temp-1))/2;
    }
    cout << answer;
    return 0;
}
