#include <bits/stdc++.h>
using namespace std;

bool isCorrect(const string& s) {
    int cnt = 0;
    for (char c : s) {
        if (c == '(') cnt++;
        else cnt--;
        if (cnt < 0) return false;
    }
    return cnt == 0;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n/2; i++) s += '(';
    for (int i = 0; i < n/2; i++) s += ')';
    sort(s.begin(), s.end());
    if (isCorrect(s)) {
        cout << s << '\n';
    }
    while (next_permutation(s.begin(), s.end())){
        if (isCorrect(s)) {
            cout << s << '\n';
        }
    }
    return 0;
}
