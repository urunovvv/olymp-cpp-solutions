#include <iostream>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
    if (a<b) swap(a,b);
    while (b){
        a %= b;
        swap(a,b);
    }
    return a;
}

ll lcm(ll a, ll b){
    return a/gcd(a,b)*b;
}

int main()
{
    ll a,b;
    cin >> a >> b;
    cout << lcm(a,b);
    return 0;
}
