#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char ans = 0;
    for (char c : s) {
        ans ^= c;
    }
    cout << ans << '\n';
    return 0;
}
