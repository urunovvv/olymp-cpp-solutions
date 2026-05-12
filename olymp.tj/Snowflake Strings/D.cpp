#include <bits/stdc++.h>
using namespace std;
void split(const string& s, string& a, string& b) {
    vector<string> v;
    for (int i = 0; i < (int)s.size(); ) {
        string cur;
        cur += s[i++];
        while (i < (int)s.size() && (islower(s[i]) || isdigit(s[i]))) {
            cur += s[i++];
        }
        v.push_back(cur);
    }
    a = v[0];
    b = "";
    for (int i = 1; i < (int)v.size(); i++) {
        b += v[i];
    }
}

int main() {
    string x, plus, y, eq;
    cin >> x >> plus >> y >> eq;
    string a, b, c, d;
    split(x, a, b);
    split(y, c, d);
    string res1 = a + d;
    string res2 = c + b;
    cout << x << " + " << y << " = " << res1 << " + " << res2 << endl;
    return 0;
}
