#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, v, k, sum = 0;
    cin >> n >> v >> k;
    for (ll i = 1; i <= n; i++) {
        ll cur = (i - 1) * k;
        if (cur >= v) {
            cout << "NO";
            return 0;
        }
        sum += v - cur;
    }
    cout << "YES " << sum;
    return 0;
}
