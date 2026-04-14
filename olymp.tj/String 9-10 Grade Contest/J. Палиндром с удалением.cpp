#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        string t = s.substr(0, i) + s.substr(i + 1);
        if (isPalindrome(t)) {
            cout << "yes";
            return 0;
        }
    }
    cout << "no";
}