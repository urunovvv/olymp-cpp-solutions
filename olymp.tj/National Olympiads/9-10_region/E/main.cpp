#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<vector<ll>> v(n, vector<ll>(n, 0));
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cin >> v[i][j];
        }
    }
    for (int i=1; i<n; i++){
        v[i][0] += v[i-1][0];
    }
    for (int j=1; j<n; j++){
        v[0][j] += v[0][j-1];
    }

    for (int i=1; i<n; i++){
        for (int j=1; j<n; j++){
            v[i][j] += max(v[i-1][j], v[i][j-1]);
        }
    }
    cout << v[n-1][n-1];
    return 0;
}
