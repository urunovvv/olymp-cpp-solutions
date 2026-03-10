#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; string s;
        cin >> n >> s;
        bool changed = true;
        while (changed) {
            changed = false;
            string t = s;
            for (int i = 1; i < n - 1; ++i) {
                if (s[i] == '0' && s[i-1] == '1' && s[i+1] == '1') {
                    t[i] = '1';
                    changed = true;
                }
            }
            s = t;
        }
        int maxi = 0;
        for (char c : s) if (c == '1') ++maxi;
        int mini = 0;
        for (int i = 0; i < n; ) {
            if (s[i] == '1') {
                int j = i;
                while (j < n && s[j] == '1') ++j;
                int L = j - i;
                mini += (L + 2) / 2;
                i = j;
            } else ++i;
        }
        cout << mini << " " << maxi << "\n";
    }
    return 0;
}
