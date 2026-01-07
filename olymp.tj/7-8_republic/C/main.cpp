#include <iostream>
#define ll long long
using namespace std;

ll gcd (ll a, ll b){
    if (a==b) return a;
    if (a>b) return gcd(a-b,b);
    return gcd(a, b-a);
}

int main()
{
    ll a,b, cnt = 0;
    cin >> a >> b;
    if (a<b) {cout << a/gcd(a,b) << '/' << b/gcd(a,b); return 0;}
    while (a >= b){
        a -= b;
        cnt++;
    }
    if (cnt!=0) cout << cnt << " ";
    if (a!=0) cout << a/gcd(a,b) << '/' << b/gcd(a,b);
    return 0;
}
