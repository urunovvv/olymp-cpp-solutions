#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll n1 = n;
    ll d = 2;
    ll cnt = 0;
    for (ll i = 2; i * i <= n1; i++) {
        if (n1 % i == 0) {
            cnt++;
            while(n1%i==0) {n1/=i;}
        }
    }
    cnt += (n1 > 1);
    cout << endl << cnt;

    return 0;
}
