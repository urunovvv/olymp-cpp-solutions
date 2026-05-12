#include <bits/stdc++.h>

using namespace std;

int main() {
    char h;
    string s;
    cin >> h >> s;
    int r,g,b;
    string rr,gg,bb;
    if (s.size()!=6 and s.size()!=3){cout << "None\n"; return 0;}
    for (auto &c:s){
        if (!isdigit(c) and !(c>='A' and c <= 'F') and !(c>='a' and c <= 'f')){
            cout << "None\n";
            return 0;
        }
    }
    if (s.size()==3){
        rr = s.substr(0, 1);
        gg = s.substr(1, 1);
        bb = s.substr(2, 1);
        rr+=rr;
        gg+=gg;
        bb+=bb;
    }
    else {
        rr = s.substr(0, 2);
        gg = s.substr(2, 2);
        bb = s.substr(4, 2);
    }
    r = stoi(rr, nullptr, 16);
    g = stoi(gg, nullptr, 16);
    b = stoi(bb, nullptr, 16);
    cout << "rgb(" << r << ", " << g << ", " << b << ")";
    return 0;
}
