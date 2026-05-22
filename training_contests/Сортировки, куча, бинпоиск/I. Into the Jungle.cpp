#include <bits/stdc++.h>
using namespace std;

double speedInField, speedInJungle, a;
double getDist(vector<double> dots) {
    return hypot(dots[0] - dots[2], dots[1] - dots[3]);
}

double func(double x) {
    double timeInField = getDist({0, 1, x, a}) / speedInField;
    double timeInJungle = getDist({x, a, 1, 0}) / speedInJungle;
    return timeInField + timeInJungle;
}

double ternatySearch(){
    double l = 0, r = 1, eps = 1e-4;
    while (r - l > eps){
        double m1, m2;
        m1 = l + (r - l) / 3;
        m2 = r - (r - l) / 3;
        if (func(m1) < func(m2)){
            r = m2;
        } else {
            l = m1;
        }
    }
    return (l + r) / 2;
}

int main(){
    cin >> speedInField >> speedInJungle >> a;
    cout << fixed << setprecision(4) << ternatySearch() << "\n";
    return 0;
}