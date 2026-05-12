#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, h;
    cin >> w >> h;
    vector<string> s1(h);
    for (int i = 0; i < h; ++i) {
        cin >> s1[i];
    }
    vector<string> s2(h);
    for (int i = 0; i < h; ++i) {
        cin >> s2[i];
    }
    string s;
    cin >> s;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << s[2 * (s1[i][j] - '0') + (s2[i][j] - '0')];
        }
        cout << '\n';
    }

    return 0;
}
