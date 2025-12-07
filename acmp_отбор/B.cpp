#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    if (a < 94 or a > 727 or
        b < 94 or b > 727 or
        c < 94 or c > 727){
            cout << "ERROR";
            return 0;
        }
    cout << max(a, max(b,c));
    return 0;
}
