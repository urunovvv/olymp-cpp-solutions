#include <bits/stdc++.h>
#define ll long long 

using namespace std;

int main(){
    ll n;
    cin >> n;
    if (n < 1){cout << 0; return 0;}
    else if (n == 1){cout << 1; return 0;}
    else if (n == 2){cout << 2; return 0;}
    ll ans = 1;
    while (ans > n){
        ll cur = 2;
        for (ll i=2; i*i<=n; i++){if (ans)}
    }
}