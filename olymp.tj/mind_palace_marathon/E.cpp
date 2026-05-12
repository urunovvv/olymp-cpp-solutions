#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    long long k;
    cin >> a >> k;
    if (k == 0) {
        return 1;
    }
    //5555555555555555555
    int base = a % 10;
    if (base == 0 || base == 1 || base == 5 || base == 6) {
        cout << base;
        return 0;
    }
    int eff_exp = (k % 4 == 0) ? 4 : (k % 4);
    int result = 1;
    for (int i = 0; i < eff_exp; i++) {
        result = (result * base) % 10;
    }
    cout << result;
    return 0;
}
