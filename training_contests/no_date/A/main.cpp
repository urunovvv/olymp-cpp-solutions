#include <iostream>
#include <map>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    map<ll, int>m;
    while (n > 0){
        m[n%10]++;
        n /= 10;
        n /= 10
    }
    cout << m.size();
    return 0;
}
