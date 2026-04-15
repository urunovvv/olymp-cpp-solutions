#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, s;
    cin >> n >> s;
    vector <ll> v(n);
    for (ll &i : v){cin >> i;}
    for (ll i=0; i<n-1; i++){
        for (ll j = i+1; j<n; j++){
            if (v[i]+v[j] == s){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO"; 
    return 0;
}