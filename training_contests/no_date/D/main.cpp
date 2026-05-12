#include <iostream>
#define ll long long
using namespace std;

bool is_prime(ll n){
    if (n==2) return true;
    else if (n<=1 or n%2==0) return false;
    for (ll i=2+(n%2 != 0); i * i <= n+1; i+=2){
        if(n % i == 0) return false;
    }
    return true;
}


int main()
{
    ll num;
    cin >> num;
    /**ll s = 0, n = 1;
    while (s < num) {
        if (is_prime(n)){n++; continue;}
        cout << n << '\n';
        ll cnt = 0;
        for (ll i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                cnt+=1;
                cout << i << ' ';
            }
        }
        if (cnt % 2 == 1){s++;}
        n++;
        cout << '\n';
    }*/
    cout << num * num;
    return 0;
}
