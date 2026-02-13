#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, a, b;
    cin >> n >> a >> b;
    if (a < b) swap(a, b);
    if (a == b) {cout << a; return 0;}
    while (a != b){
        if (a%2LL) a = (a - 1LL) / 2LL;
        else a /= 2;
        if (b%2LL) b = (b - 1LL) / 2LL;
        else b /= 2LL;
    }
    cout >> b;
}
