#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    string decoded = "";
    for (int i = 0; i < s.length(); ++i) {
        int enc_val;
        if (s[i] >= '0' && s[i] <= '9') {
            enc_val = s[i] - '0';
        } else {
            enc_val = s[i] - 'A' + 10;
        }
        int dec_val = (enc_val - (i + 1) % 27 + 27) % 27;
        if (dec_val == 0) {
            decoded += ' ';
        } else {
            decoded += (char)('a' + dec_val - 1);
        }
    }
    cout << decoded << endl;
    return 0;
}
