#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    char comp;
    int h1, h2, m2, m1;
    cin >> h1 >> comp >> m1 >> h2 >> comp >> m2;
    int total1 = h1*60+m1;
    int total2 = h2*60+m2;
    int res = total2 - total1;
    cout << (res > 0 ? "Left " : "Passed ");
    if (abs(res / 60) < 10){cout << '0';}
    cout << abs(res / 60) << ':';
    if (abs(res % 60) < 10) cout << '0';
    cout << abs(res % 60);
    return 0;
}
