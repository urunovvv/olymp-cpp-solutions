#include <bits/stdc++.h>
using namespace std;

int main(){
    char comp;
    int h,m,h1,m1;
    cin >> h >> comp >> m >> h1 >> m1;
    h += (h1 % 24);
    m += (m1 % 60);
    h += m/60;
    m %= 60;
    h %= 24;
    if (h < 10) cout << '0';
    cout << h << ':';
    if (m < 10) cout << '0';
    cout << m << '\n';
    return 0;
}
