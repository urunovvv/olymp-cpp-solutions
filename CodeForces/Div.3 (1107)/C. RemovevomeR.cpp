#include <bits/stdc++.h>
using namespace std;

void urunov(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int changes = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) changes++;
    }
    if (changes == 0)
        cout << 1 << '\n';
    else if (changes == 1)
        cout << 2 << '\n';
    else
        cout << 1 << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        urunov();
    }
    return 0;
}