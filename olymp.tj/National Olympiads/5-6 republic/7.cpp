#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n, k, l = 1, i=1;
    cin >> n >> k;
    for (ll i=0; i<n; i++){
        ll cur;
        cin >> cur;
        l *= cur;
    }
    l %= k;
    while (true){
        if ((l * (i%k)) % k == 0){
            cout << i;
            return 0;
        }
        i++;
    }
    return 0;
}
