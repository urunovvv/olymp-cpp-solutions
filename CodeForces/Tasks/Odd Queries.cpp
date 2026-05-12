#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> v(n+1, 0), pref(n+1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        pref[i] = pref[i-1] + v[i];
    }
    while (q--){
        int l, r, k;
        cin >> l >> r >> k;
        int sum = pref[l-1] + (pref[n] - pref[r]) + k * (r-l+1);
        cout << (sum % 2 ? "YES\n" : "NO\n");
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}