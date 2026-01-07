#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll v[n+1][n+1];
    for (ll i=0; i<n+1; i++){
        for (ll j=0; j<n+1; j++){
            v[i][j] = 0;
        }
    }
    for (ll i=0; i<n; i++){
        for (ll j=0; j<=i; j++){
            cin >> v[i][j];
        }
    }
    ll cnt=v[0][0];
    for (ll i=0; i<n; i++){
        for (ll j=0; j<=i; j++){
            cnt += max(v[i][j+1], v[i+1][j]);
            i += (v[i][j+1] < v[i+1][j]);
        }
    }
    cout << cnt;
    return 0;
}
