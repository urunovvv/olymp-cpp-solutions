#include <bits/stdc++.h>
using namespace std;
bool isBrackets(string &s){
    for (char &c : s){
        if (c != '(' and c != ')' and
            c != '[' and c != ']' and
            c != '{' and c != '}'){
             return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    stack<char> st;
    if (!isBrackets(s)){cout << "NO\n"; return 0;}
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (st.empty()) {
                cout << "NO";
                return 0;
            }
            char t = st.top();
            st.pop();
            if ((c == ')' && t != '(') ||
                (c == ']' && t != '[') ||
                (c == '}' && t != '{')) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << (st.empty() ? "YES" : "NO");
    return 0;
}
