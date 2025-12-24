#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }
    int len = 0;
    bool odd = false;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 0) {
            len += freq[i];
        } else {
            len += freq[i] - 1;
            odd = true;
        }
    }
    if (odd) {
        len += 1;
    }

    cout << len << endl;

    return 0;
}
