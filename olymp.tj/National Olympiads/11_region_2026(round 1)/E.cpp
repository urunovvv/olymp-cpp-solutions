#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string word;
    int cnt = 0;

    for (char c : s) {
        if (!isspace(c)) {
            word += c;
        } else {
            if (!word.empty()) {
                ++cnt;
                word.clear();
            }
        }
    }
    if (!word.empty()) ++cnt;
    cout << cnt;
    return 0;
}