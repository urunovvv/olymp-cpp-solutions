#include <bits/stdc++.h>

using namespace std;

int getPoints(int r, int c) {
    int t = r;
    int b = 11 - r;
    int l = c;
    int ri = 11 - c;
    return min({t, b, l, ri});
}

void solve() {
    int ans = 0;
    
    for (int r = 1; r <= 10; ++r) {
        string s;
        cin >> s;
        for (int i = 0; i < 10; i++){
            if (s[i] == 'X') {
                ans += getPoints(r, i+1);
            }
        }
    }
    cout << ans << "\n";
}

int main(){ 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
