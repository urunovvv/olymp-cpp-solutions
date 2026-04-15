#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    ll cnt = 0;
    for (auto &i : v){cin >> i; cnt += i/2 + (i%2==1);}
    cout << cnt;
    return 0;
}