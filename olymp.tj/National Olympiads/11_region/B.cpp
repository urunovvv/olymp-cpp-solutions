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

int main()
{
    string s;
    cin >> s;
    stack<char>brackets;
    if (!isBrackets(s)){cout << "NO"; return 0;}
    for (int i=0; i<s.size(); i++){
        if (s[i] == '(' or s[i] == '{' or s[i] == '['){
            brackets.push(s[i]);
        }
        else {
            if (brackets.empty()){cout << "NO"; return 0;}
            if (s[i] - brackets.top() == 1
                or s[i] - brackets.top() == 2){brackets.pop();}
        }
    }
    cout << (brackets.empty() ? "YES" : "NO");
    return 0;
}
