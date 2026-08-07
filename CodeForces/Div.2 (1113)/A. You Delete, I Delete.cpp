#include <bits/stdc++.h>
using namespace std;

void urunov() {
    string s;
    cin >> s;
    int pos = -1;
    bool f = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            f = 1;
        }
        else if (f) {
            pos = i;
            break;
        }
    }
    if (pos != -1) {
        s.erase(pos, 1);
    }
    int pos1 = s.find('1');
    s.erase(pos1, 1);
    cout << s << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        urunov();
    }
    return 0;
}