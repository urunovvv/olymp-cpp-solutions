#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n == 2 || n == 3) return true;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << (isPrime(n+1) ? "YES\n" : "NO\n");
    }
}