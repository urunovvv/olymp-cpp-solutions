#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    if (!(cin >> s)) return;
    int n = s.length();
    int i = 0;
    if (n==1 or islower(s[0]) or isupper(s[n-1])) {
        cout << "No\n";
        return;
    }
    while (i < n) {
        if (isupper(s[i])) {
            int cnt = 1;
            i++;
            while (i < n && islower(s[i])) {
                i++;
                cnt++;
            }
            if (cnt < 2 or cnt > 4) {
                cout << "No\n";
                return;
            }
        }
        else {
            cout << "No\n";
            return;
        }
    }

    cout << "Yes\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
