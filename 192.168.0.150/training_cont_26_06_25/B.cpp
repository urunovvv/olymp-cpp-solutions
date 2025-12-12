#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;

    ll x = 1;
    while (x < n) x *= 10;

    cout << x;
    return 0;
}
