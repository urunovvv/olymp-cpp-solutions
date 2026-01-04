#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    if (!(cin >> s)) return 0;
    stack<char> st;
    for (char c : s) {
        if (!st.empty() and st.top() == c) {
            st.pop();
        } else {
            st.push(c);
        }
    }
    cout << (st.empty() ? "YES" : "NO");
    return 0;
}
