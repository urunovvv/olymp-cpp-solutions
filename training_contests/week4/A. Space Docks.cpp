#include <bits/stdc++.h>
using namespace std;

bool isOpen(char c){
    return c == '[' || c == '(' || c == '{';
}

// ({})

bool checkBracketSequence(string &s){
    stack <char> brackets;
    unordered_map<char, char> close {{'{', '}'}, {'[', ']'}, {'(', ')'}};
    for (char c : s){
        if (isOpen(c)){
            brackets.push(c);
        }
        else{
            if (!brackets.empty() && c == close[brackets.top()]){
                brackets.pop();
            }else{
                return false;
            }
        }
    }
    return brackets.empty();
}

int main(){
    string s;
    cin >> s;
    cout << (checkBracketSequence(s) ? "YES" : "NO");
}