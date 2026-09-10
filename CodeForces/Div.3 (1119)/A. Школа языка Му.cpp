#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n; i += k) {
        bool zero = false;
        for (int j = 0; j < k; ++j) {
            if (s[i + j] == '0') {
                zero = true;
                break;
            }
        }
        if (!zero) {
            ans++;
        }
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) urunov();
}