#include <iostream>
#include <vector>
#define ll long long
#define pb push_back
using namespace std;

string solve(string &s) {
    vector<ll> nums;
    vector<char> op;
    ll res = 0;
    for (ll i = 0; i < s.size(); i++) {
        ll cur = 0;
        while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
            cur = cur * 10 + (s[i] - '0');
            i++;
        }
        nums.pb(cur);
        if (i < s.size() && (s[i] == '+' || s[i] == '*'))
            op.pb(s[i]);
    }

    res = nums[0];
    for (ll i = 0; i < op.size(); i++) {
        if (op[i] == '+') res += nums[i + 1];
        else res *= nums[i + 1];
    }
    return to_string(res);
}

string func(string s) {
    ll open = -1, close = s.size();
    for (ll i = 0; i < s.size(); i++) {
        if (s[i] == '(') open = i;
    }
    if (open == -1) return solve(s);

    for (ll i = open + 1; i < s.size(); i++) {
        if (s[i] == ')') { close = i; break; }
    }

    string sub = s.substr(open + 1, close - open - 1);
    sub = solve(sub);
    s.replace(open, close - open + 1, sub);
    return func(s);
}

int main() {
    string s;
    cin >> s;
    cout << func(s);
    return 0;
}
