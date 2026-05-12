#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll &i : v){
        cin >> i;
    }
    for (ll i=0; i<n/2; i++){
        if (v[i]!=v[n-i-1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}