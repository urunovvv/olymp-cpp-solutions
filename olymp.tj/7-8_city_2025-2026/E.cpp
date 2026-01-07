#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n; 
    cin >> n;
    if (n == 2){cout << "YES"; return 0;}
    if (n % 2 == 0){cout << "NO"; return 0;}
    for (ll i=3; i * i < n+1; i++){
        if (n % i == 0){cout << "NO"; return 0;}
    }
    cout << "YES";
    return 0;
}