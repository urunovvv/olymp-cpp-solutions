#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    while (n/10>0){
        cout << 'X';
        n-=10;
    }
    while (n/5>0){
        cout << 'V';
        n-=5;
    }
    while  (n--) cout << 'I';
    return 0;
}
