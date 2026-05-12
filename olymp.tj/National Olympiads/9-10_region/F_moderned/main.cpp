#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll add_mul (ll l, ll r, char op){
    if (op == '+') return l+r;
    return l*r;
}

string solve(string &s) {
    ll res = 0;
    ll cur = 0;
    char op = '+';
    for (char &c:s){
        if (c == '+' || c == '*'){
            res = add_mul(res, cur, op);
            op = c;
            ll cur = 0;
        }
        else cur = cur*10+(c-'0');
    }
    return to_string(add_mul(res, cur, op));
}

int main()
{
    string s;
    cin >> s;
    size_t r = s.find(')');
    while (r != string::npos){
        int l = r;
        while (s[l] != '('){
            l--;
        }
        string left = s.substr(0, l);

        string mid = solve(s.substr(l+1, r - l - 2));
        string right(r+1, s.size()-r-1);
        s = left + mid + right;
        r = s.find(')');
    }
    cout << solve(s);
    return 0;
}
