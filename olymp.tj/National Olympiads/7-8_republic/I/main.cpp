#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int loc = s.size();
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            loc = i;
            break;
        }
    }
    if (loc != s.size()) {
        int j = loc;
        if (j >= 0 && s[j] < '9') s[j]++;
        else if (j < 0) s = "1" + s;
        for (int i = loc; i < s.size(); i++)
            s[i] = '1';
    }
    cout << s;
    return 0;
}
