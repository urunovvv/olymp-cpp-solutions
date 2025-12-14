#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    stack<int> st;
    for (int i = 0; i < s.size(); ) {
        if (s[i] == ' ') {
            i++;
            continue;
        }
        if (isdigit(s[i]) || (s[i] == '-' && i + 1 < s.size() && isdigit(s[i + 1]))) {
            int sign = 1;
            if (s[i] == '-') {
                sign = -1;
                i++;
            }
            int num = 0;
            while (i < s.size() && isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            st.push(sign * num);
        }
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            if (s[i] == '+') st.push(a + b);
            else if (s[i] == '-') st.push(a - b);
            else if (s[i] == '*') st.push(a * b);

            i++;
        }
    }
    cout << st.top();
    return 0;
}
