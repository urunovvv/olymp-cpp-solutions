#include <bits/stdc++.h>
using namespace std;

bool is_number(string s){
    bool b = true;
    int point = 0, minus = 0;
    for (char c : s) {
        if (c == '.') {
            point++;
        }
        else if (c == '-') {
            minus++;
        }
        else if (!isdigit(c)) {
            b = false;
            break;
        }
    }
    if (point > 1 || minus > 1 || (minus == 1 && s[0] != '-')) {
        b = false;
    }
    return b;
}

int main()
{
    string n,m;
    cin >> n >> m;
    if (is_number(n) && is_number(m)) {
        double res = stof(n) + stof(m);
        if (res == int(res)) {
            cout << int(res) << endl;
        } else {
            cout << res << endl;
        }
    }
    else {
        cout << n + m << endl;
    }
}
