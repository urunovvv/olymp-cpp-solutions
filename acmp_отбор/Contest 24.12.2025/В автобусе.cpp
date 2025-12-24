#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n, m;
    cin >> n >> m;
    if(n == 0 && m == 0) cout << 0 << " " << 0;
    else if(n == 0 && m > 0)  cout << "Impossible";
    else if(m == 0)  cout << n << " " << n;
    else if(n < m)  cout << n + (m - n) << " " << n + (m - 1);
    else if(n > m)  cout << n << " " << n + (m - 1);
    else if(n == m)  cout << n << " " << n + (m - 1);
    return 0;
}
