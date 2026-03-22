#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio();
    cin.tie();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        unordered_map<ll,ll> cnt;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ll x;
                cin >> x;
                cnt[x]++;
            }
        }
        ll mx = 0;
        for(auto &p:cnt)
            mx = max(mx, p.second);
        if(mx > 1LL * n * (n - 1))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
