#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin >> n;
    ll cnt = 0;
    for (ll i=1; i<=n; i++){
        cnt += i;
    }
    cout << cnt;
    return 0;
}