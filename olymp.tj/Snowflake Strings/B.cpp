#include <bits/stdc++.h>
using namespace std;

vector<int> func(const string& s) {
    int n = s.size();
    vector<int> pi(n, 0);
    for (int i = 1; i < n; ++i) {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j]) {
            j = pi[j - 1];
        }
        if (s[i] == s[j]) {
            ++j;
        }
        pi[i] = j;
    }
    return pi;
}

int main() {
    string s;
    cin >> s;
    int n = s.size();
    if (n == 0) {
        cout << 0 << '\n';
        return 0;
    }
    vector<int> pi = func(s);
    int cnt = 1;
    int len = pi[n - 1];
    while (len > 0) {
        cnt++;
        len = pi[len - 1];
    }
    cout << cnt << '\n';
    return 0;
}
