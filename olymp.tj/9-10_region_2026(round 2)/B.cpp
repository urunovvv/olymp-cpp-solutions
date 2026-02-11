#include <bits/stdc++.h>
using namespace std;

int calc(int a, int b, char op) {
    if (op == '+') return a + b;
    else if (op == '-') {
        return a - b;
    }
    else if (op == '*') return a * b;
    else {
        if (a % b != 0) return false;
        return a / b;
    }
}

int main() {
    int a, b;
    cin >> a >>b;
    string op;
    cin >> op;
    int ans = 0;
    for (int x1 = 1; x1 <= 99; x1++) {
        for (int x3 = 1; x3 <= 99; x3++) {
            for (int x4 = 1; x4 <= 99; x4++) {
                int x2, x5, x6, x7;
                x2 = calc(a, x1, op[0]);
                x6 = calc(a, x3, op[1]);
                x5 = calc(x3, x4, op[4]);
                x7 = calc(x1, x4, op[2]);
                if (x2 > 0 and x2 < 100 and
                    x6 > 0 and x6 < 100 and
                    x7 > 0 and x7 < 100 and
                    x5 > 0 and x5 < 100 and
                    calc(x2, x5, op[3]) == b and
                    calc(x6, x7, op[5]) == b) ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
