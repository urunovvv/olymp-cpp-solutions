#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin >> n;
    ll cnt = 0;
    for (ll i=0; i<n; i++){
        ll cur;
        cin >> cur;
        cnt+=cur;
    }
    cout << ceil(cnt/n) << '\n';
}