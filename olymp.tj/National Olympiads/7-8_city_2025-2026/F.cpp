#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int p = 0, n = 0;
    bool v = true;
    string t;
    s += '.';
    for (char c : s) {
        if (c == '.') {
            if (t.empty() or t.size() > 3) {
                v = false;
                break;
            }
            n = 0;
            for (char d : t) {
                if (!isdigit(d)) {
                    v = false;
                    break;
                }
                n = n * 10 + (d - '0');
            }
            if (n > 255 or (t[0] == '0' and t.size() > 1)) {
                v = false;
                break;
            }
            t.clear();
            p++;
        } else {
            t += c;
        }
    }

    if (p != 4) v = false;

    cout << (v ? "YES" : "NO");
    return 0;
}
