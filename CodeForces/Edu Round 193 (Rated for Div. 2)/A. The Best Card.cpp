#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool is_prime(ll n){
    if(n <= 1) return false;
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

void urunov(){
    ll n;
    cin >> n;
    if(is_prime(n + 1)){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t; 
    cin >> t;
    while (t--){
        urunov();
    }
}