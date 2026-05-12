#include <bits/stdc++.h>
using namespace std;
using db = double;
db Vp, Vf, a;
db time(db x) {
    db t1 = sqrt(x*x + (1-a)*(1-a)) / Vp;
    db t2 = sqrt((1-x)*(1-x) + a*a) / Vf;
    return t1 + t2;
}

int main() {
    cin >> Vp >> Vf >> a;
    db l = 0.0, r = 1.0;
    while (r - l > 1e-12) {
        db m1 = l + (r-l)/2.0;
        db m2 = r - (r-l)/2.0;
        if (time(m1) < time(m2))
            r = m2;
        else
            l = m1;
    }
    cout << fixed << setprecision(10) << (l+r)/2.0 << "\n";
}
