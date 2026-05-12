#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll cnt = 0;
    for (ll i=min(1LL, n); i<=max(1LL, n); i++){
        cnt+=i;
    }
    cout << cnt;
    return 0;
}
