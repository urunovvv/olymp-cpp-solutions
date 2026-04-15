#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    for (ll i=0; i<n; i++){
        for (ll j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    ll sum = a[0][0];
    ll i=0, j=0;
    while (i<n){
        if (i == n-1){sum += a[i][j+1]; j++; continue;}
        while (j<m){
            if (j == m-1){sum += a[i+1][j]; i++; break;}
            if (a[i+1][j] >= a[i][j+1]){
                sum += a[i+1][j];
                i++;
            }
            else {sum += a[i][j+1]; j++;}
        }
        if (i==n-1 and j==m-1){break;}
    }
    cout << sum;
    return 0;
}
