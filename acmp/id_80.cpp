#include <bits/stdc++.h>
#define ld long double
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    char d;
    int n = 0;
    getline(cin,s);
    if (s.size() < 5) { cout << "ERROR"; return 0; }
    int a = 0;
    bool minus;
    minus = s[0] == '-';
    if (minus) n++;
    int l = n;
    while (s[n] >= '0' && s[n] <= '9' && n < s.size() - 4) {
         a = a * 10 + s[n] - '0';
         n++;
    }
    if (n == l) { cout << "ERROR"; return 0; }
    if (minus) a = -a;
    d = s[n];
    n++;
    minus = s[n] == '-';
    if (minus) n++;
    int b = 0;
    l = n;
    while (s[n] >= '0' && s[n] <= '9' && n < s.size() - 2) {
         b = b * 10 + s[n] - '0';
         n++;
    }
    if (n == l) { cout << "ERROR"; return 0; }
    if (minus) b = -b;
    if (s[n] != '=') { cout << "ERROR"; return 0; }
    n++;
    minus = s[n] == '-';
    if (minus) n++;
    l = n;
    int c = 0;
    while (n < s.size() && s[n] >= '0' && s[n] <= '9') {
            c = c * 10 + s[n] - '0';
            n++;
    }
    if (n == l) { cout << "ERROR"; return 0; }
    if (n < s.size()) { cout << "ERROR"; return 0; }
    if (minus) c = -c;
    switch (d){
        case '-': {
            if (a - b == c) cout << "YES";
            else cout << "NO"; break;
        }
        case '+': {
            if (a + b == c) cout << "YES";
            else cout << "NO"; break; }
        case '*': {
            if (a * b == c) cout << "YES";
            else cout << "NO"; break; }
        case '/': {
            if (b != 0 && a / b == c && a % b == 0) cout << "YES";
            else cout << "NO"; break; }
        default: cout << "ERROR"; break;
    }
    return 0;
}
