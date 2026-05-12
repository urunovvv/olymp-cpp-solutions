#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int>m = {
    {'A', 1},
    {'B', 2},
    {'C', 3},
    {'D', 4},
    {'E', 5},
    {'F', 6},
    {'G', 7},
    {'H', 8}};

bool isCorrectInput(string s){
    if (s.size() != 5){
        return false;
    }
    if (s[2] != '-' || s[0] < 'A' || s[0] > 'H' ||
        s[1] < '1' || s[1] > '8' || s[3] < 'A' || s[3] > 'H' ||
        s[4] < '1' || s[4] > '8') return false;
    return true;
}
bool isCorrectMove(string s){
    int x1, x2, y1, y2;
    x1 = m[s[0]];
    y1 = s[1] - '0';
    x2 = m[s[3]];
    y2 = s[4] - '0';
    if (abs(x1 - x2) == 1 && abs(y1 - y2) == 2 ||
        abs(x1 - x2) == 2 && abs(y1 - y2) == 1) return true;
    return false;
}

int main(){
    string s;
    cin >> s;
    if (!isCorrectInput(s)){
        cout << "ERROR\n";
        return 0;
    }
    cout << (isCorrectMove(s) ? "YES" : "NO");
    return 0;
}