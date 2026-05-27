#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n, k;
    cin >> n >> k;
    ll l = 1, r = n * n;
    while (l < r){
        ll mid = (l + r) / 2;
        ll cnt = 0;
        for (ll i = 1; i <= n; i++)
            cnt += min(mid / i, n);
        if (cnt >= k)
            r = mid;
        else
            l = ++mid;
    }
    cout << l << endl;
}