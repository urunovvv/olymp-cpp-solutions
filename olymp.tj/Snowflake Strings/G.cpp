#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i + 1 < n; i++) {
        if (s[i] != '?' && s[i + 1] != '?' && s[i] == s[i + 1]) {
            cout << -1 << endl;
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] != '?') continue;
        char prev = (i > 0) ? s[i - 1] : ' ';
        char next = (i + 1 < n && s[i + 1] != '?') ? s[i + 1] : ' ';
        for (char c = 'a'; c <= 'z'; c++) {
            if (c != prev && c != next) {
                s[i] = c;
                break;
            }
        }
    }
    for (int i = 0; i + 1 < n; i++) {
        if (s[i] == s[i + 1]) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << s << endl;
    return 0;
}
