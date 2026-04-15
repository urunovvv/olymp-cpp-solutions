#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll x,a;
    cin >> x >> a;
    ll i=0;
    while (true){
        if ((x+i) % a == 0) {cout << x+i; return 0;}
        else i++;
    }
    return 0;
}
