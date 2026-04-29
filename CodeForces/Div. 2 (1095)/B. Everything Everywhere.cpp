#include <bits/stdc++.h>
using namespace std;

void urunov(){
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    int ans = 0;
    for (int i = 0; i + 1 < n; ++i) {
        int a = p[i], b = p[i + 1];
        int c = abs(a - b);
        if (c == __gcd(a, b)) {
            ans++;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        urunov();
    }
    return 0;
}