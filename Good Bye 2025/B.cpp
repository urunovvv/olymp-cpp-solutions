#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string str = "2025";
    int pos = 0;
    for (char c : s) {
        for (int i = pos; i < s.size(); i++) {
            if (s[i] == c) {
                cout << i + 1;
                pos = i + 1;
                break;
            }
        }
    }

    return 0;
}
