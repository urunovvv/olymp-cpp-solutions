#include <iostream>
#include <map>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ll a, k, m, res = 1;
    cin >> a >> k >> m;
    while (k > 0){
        if (k % 2 == 1){res = (res * a) % m;}
        a = (a*a)%m;
        k /= 2;
    }
    cout << res;
    return 0;
}
