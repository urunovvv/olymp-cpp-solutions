#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool prime(ll n){
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

bool isPerfectSquare(ll n){
    ll root = sqrt(n);
    return root * root == n;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll &i : a) cin >> i;
    for (ll i : a){
        if (isPerfectSquare(i) && prime((int)sqrt(i))){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}