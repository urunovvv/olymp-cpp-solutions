#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool func(string s, string t) {
    int n = s.size();
    int l = -1, r = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            if (l == -1) l = i;
            r = i;
        }
    }
    if (l == -1) return true;
    string cur = s;
    reverse(cur.begin() + l, cur.begin()+r+1);
    if (cur == t) return true;
    cur = s;
    reverse(begin(cur) + l, cur.begin()+r+1);
    for (int i = l; i <= r; i++) {
        cur[i] = (cur[i] == 'a' ? 'b' : 'a');
    }
    if (cur == t) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        string t1 = "";
        for (int i = 0; i < n; i++) {
            t1 += (i % 2 == 0 ? 'a' : 'b');
        }
        string t2 = "";
        for (int i = 0; i < n; i++) {
            t2 += (i % 2 == 0 ? 'b' : 'a');
        }
        cout << (func(s, t1) || func(s, t2) ? "YES\n" : "NO\n");
    }
}