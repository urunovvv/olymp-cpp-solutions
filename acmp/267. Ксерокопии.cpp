#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll mid, ll n, ll x, ll y){
    return mid / x + mid / y + 1 >= n; 
}

int main(){
    ll n, x, y;
    cin >> n >> x >> y;
    ll mn = min(x, y);
    ll l = 0, r = mn * (n - 1);
    if (n == 1){
        cout << 0;
        return 0;
    }
    while (l < r){
        ll mid = (l + r) / 2;
        if (check(mid, n, x, y)){
            r = mid
        }
    }
}