#include <bits/stdc++.h>
using namespace std;

bool isPal(const string &s) {
    for (int i = 0; i < (int)s.size() / 2; i++)
        if (s[i] != s[s.size() - 1 - i]) return false;
    return true;
}

int main() {
    string s;
    getline(cin, s);
    string t = "", orig = "";
    for (char x : s) {
        if (isalpha(x)) {
            t += tolower(x);
            orig += x;
        }
    }
    int n = t.size();
    if (isPal(t)) {
        cout << "YES\n" << orig << "\n";
        return 0;
    }
    for (int i = 0; i <= n; i++) {
        for (int c = 'a'; c <= 'z'; c++) {
            string u = t;
            u.insert(u.begin() + i, c);
            if (isPal(u)) {
                string res = orig;
                res.insert(res.begin() + i, isupper(c) ? toupper(c) : c);
                cout << "YES\n" << res << "\n";
                return 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        string u = t;
        u.erase(u.begin() + i);
        if (isPal(u)) {
            string res = orig;
            res.erase(res.begin() + i);
            cout << "YES\n" << res << "\n";
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (char c = 'a'; c <= 'z'; c++) {
            if (c == t[i]) continue;
            string u = t;
            u[i] = c;
            if (isPal(u)) {
                string res = orig;
                res[i] = isupper(orig[i]) ? toupper(c) : c;
                cout << "YES\n" << res << "\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
}
