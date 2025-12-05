#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, m, s;
    char c;
    cin >> h >> c >> m >> c >> s;
    int S;
    cin >> S;
    int total = h * 3600 + m * 60 + s;
    total -= S;
    if (total < 0)
        total += 86400;
    int nh = total / 3600;
    total %= 3600;
    int nm = total / 60;
    int ns = total % 60;
    if (nh < 10) cout << '0';
    cout << nh << ':';
    if (nm < 10) cout << '0';
    cout << nm << ':';
    if (ns < 10) cout << '0';
    cout << ns;
    return 0;
}
