#include <bits/stdc++.h>

using namespace std;
bool func(string s) {
    for (char &c:s){
        if (isalpha(c)) c = tolower(c);
        if (!isalpha(c) and !isdigit(c)) return false;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if (s[0] != '#' or (s.size() != 4 and s.size() != 7)) {
        cout << "None\n";
        return 0;
    }
    vector<int> rgb;
    if (s.size() == 4) {
        for (int i = 1; i <= 3; i++) {
            int n;
            string cur = to_string(s[i]);
            if(func(cur)) n = stoi(cur, nullptr, 16);
            else {cout << "None"; return 0;}
            rgb.push_back(n);
        }
    } else {
        for (int i = 1; i <= 5; i += 2) {
            int n;
            string cur = s[i]+s[i+1];
            if (func(cur)) n = stoi(cur, nullptr, 16);
            else {cout << "None"; return 0;}
            rgb.push_back(n);
        }
    }
    cout << "rgb(" << rgb[0] << ", " << rgb[1] << ", " << rgb[2] << ")";
    return 0;
}
