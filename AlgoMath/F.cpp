#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b){
    return (a / gcd(a, b)) * b;
}

int main() {
    ll a,b,c;
    cin >> a >> b >> c;
    cout << lcm(a, lcm(b, c));
    return 0;
}
