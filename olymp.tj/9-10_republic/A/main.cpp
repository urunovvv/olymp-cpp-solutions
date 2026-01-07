#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a, b, n;
    cin >> a >> b >> n;
    a *= n;
    b *= n;
    a += b/100;
    b %= 100;
    cout << a << ' ' << b;
    return 0;
}
