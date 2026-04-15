#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (isalpha(c)) continue;
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        }
        else {
            if (st.empty()) {
                cout << i + 1 << '\n';
                return 0;
            }
            char t = st.top();
            if ((c == ')' && t == '(') ||
                (c == ']' && t == '[') ||
                (c == '}' && t == '{')) {
                st.pop();
            } else {
                cout << i + 1 << '\n';
                return 0;
            }
        }
    }

    if (!st.empty()) cout << -1 << '\n';
    else cout << 0 << '\n';
}
