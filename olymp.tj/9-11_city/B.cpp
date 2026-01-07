#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    map<ll, ll>cnt;
    for (ll i=0; i<5; i++){
        ll n;
        cin >> n;
        cnt[n]++;
    }
    for (auto p : cnt){
        if (p.second == 2){cout << p.first; return 0;}
    }
    return 0;
}