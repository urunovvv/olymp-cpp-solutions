#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    for (ll k=0; k<t; k++){
        ll n;
        cin >> n;
        string s(n-1,'0');
        s = "1"+s;
        cout << s << "\n";
    }
    return 0;
}
