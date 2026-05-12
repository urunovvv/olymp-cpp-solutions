#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vll vector<ll>
#define eb emplace_back
using namespace std;
int main()
{
    ld a,b;
    cin >> a >> b;
    ld s = a*b;
    if (sqrt(s) == (ll)sqrt(s)){
        cout << sqrt(s);
    }
    else{
        cout << "0";
    }

    return 0;
}
