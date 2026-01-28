#include<bits/stdc++.h>
using namespace std;
using ld = long double;
int main()
{
    ld c;
    cin >> c;
    ld l = 0.0, r = (c >= 1 ? sqrt(c) : 1.0);
    while (r - l > 1e-6){
        ld mid = (l+r)/2.0;
        if (mid*mid + sqrt(mid)>=c) r = mid;
        else l = mid;
    }
    cout << fixed << setprecision(6) << r;
}
