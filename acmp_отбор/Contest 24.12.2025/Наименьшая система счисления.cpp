#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    if (!getline(cin, s) or s.empty()) {
        return 0;
    }
    int mx = -1;
    bool flag = false;
    for (char x : s) {
        if (isspace(x)) {
        cout << -1 << "\n";
        return 0;}
        int cur;
        if (isdigit(x)) {
            cur = x - '0';
        } else if (isupper(x)) {
            cur = x - 'A' + 10;
        } else {
            cout << -1 << "\n";
            return 0;
        }

        mx = max(mx, cur);
        flag = true;
    }
    if (!flag) {
        cout << -1 << "\n";
        return 0;
    }
    int base = max(2, mx + 1);
    cout << base << "\n";
    return 0;
}
