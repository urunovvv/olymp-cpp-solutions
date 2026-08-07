#include <bits/stdc++.h>

using namespace std;

bool isBracket(char c){
    string br = "(){}[]";
    return br.find(c) != string::npos;
}

int main(){
    string s;
    cin >> s;
    stack<char> st;
    for (char c : s){
        if (!isBracket(c)) continue;
        if (c == '(' || c == '[' || c == '{') st.push(c);
        else {
            if (st.empty()){
                cout << "NO"; return 0;
            }
            char t = st.top();
            if (t == '(' and c != ')' or t == '[' and t != ']' or t == '{' and t != ']'){
                cout << "NO"; return 0;
            }
            st.pop();
        }
    }
    cout << (st.empty() ? "YES" : "NO");
}
