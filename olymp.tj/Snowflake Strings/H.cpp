#include <bits/stdc++.h>
using namespace std;

bool func(const string &s) {
    for (int i = 1; i < s.size(); i++)
        if (s[i] == s[i-1]) return false;
    return true;
}

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    if (func(s)) {
        cout << s;
        return 0;
    }
    string ans = "";
    while (next_permutation(s.begin(), s.end())){
        if (func(s)) {
            ans = s;
            break;
        }
    }

    if (ans == "") cout << -1 << "\n";
    else cout << ans << "\n";
}
