#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ma;
    cin >> a >> b >> c;
    ma = (a+b+c)/3;
    int cnt = (a > ma) + (b > ma) + (c > ma);
    cout << cnt;
}
