#include <bits/stdc++.h>
using namespace std;
#define ld long double
int main(){
    ld n;
    cin >> n;
    ld eps = 1e-6;
    ld l = 0, r = n;
    while (r - l > eps){
        ld mid = (l + r) / 2;
        if (mid * mid + sqrt(mid) >= n)
            r = mid;
        else
            l = mid;
    }
    cout << fixed << setprecision(6) << l; 
}