#include <bits/stdc++.h>
using namespace std;

string trim(string &s) {
    int i = 0;
    while (i + 1 < (int)s.size() && s[i] == '0') ++i;
    return s.substr(i);
}
string add(string &a, string &b) {
    int i = a.size()-1, j = b.size()-1, carry = 0;
    string res;
    while (i >= 0 || j >= 0 || carry) {
        int da = (i >= 0) ? a[i--]-'0' : 0;
        int db = (j >= 0) ? b[j--]-'0' : 0;
        int s = da + db + carry;
        carry = s / 10;
        res.push_back(char('0' + (s % 10)));
    }
    reverse(res.begin(), res.end());
    return trim(res);
}
string Minus(string &a, string &b) {
    int i = a.size()-1, j = b.size()-1, borrow = 0;
    string res;
    while (i >= 0) {
        int da = a[i--] - '0';
        int db = (j >= 0) ? b[j--]-'0' : 0;
        int cur = da - db - borrow;
        if (cur < 0) { cur += 10; borrow = 1; }
        else borrow = 0;
        res.push_back(char('0' + cur));
    }
    while (res.size() > 1 && res.back() == '0') res.pop_back();
    reverse(res.begin(), res.end());
    return trim(res);
}
string mul_one(string &a, int d) {
    if (d == 0) return "0";
    int carry = 0;
    string res;
    for (int i = a.size()-1; i >= 0; --i) {
        int prod = (a[i]-'0') * d + carry;
        res.push_back(char('0' + (prod % 10)));
        carry = prod / 10;
    }
    while (carry) { res.push_back(char('0' + (carry % 10))); carry /= 10; }
    reverse(res.begin(), res.end());
    return trim(res);
}
string multiply(string &a, string &b) {
    vector<int> res(a.size() + b.size(), 0);
    for (int i = a.size()-1; i >= 0; --i) {
        for (int j = b.size()-1; j >= 0; --j) {
            int p = (a[i]-'0') * (b[j]-'0');
            int pos = i + j + 1;
            res[pos] += p;
        }
    }
    for (int i = res.size()-1; i > 0; --i) {
        if (res[i] >= 10) {
            res[i-1] += res[i] / 10;
            res[i] %= 10;
        }
    }
    string s;
    for (int x : res) s.push_back(char('0' + x));
    return trim(s);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a,b;
    cin >> a >> b;
    cout << add(a,b);
    return 0;
}
