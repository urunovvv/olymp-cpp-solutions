#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    ll n, cnt=0;
    cin >> n;
    for (ll i=1; i<=sqrt(n); i++){
        if (i*i == n){cnt++; continue;}
        if (n % i == 0) cnt+=2;
    }
    cout << cnt;
    return 0;
}
