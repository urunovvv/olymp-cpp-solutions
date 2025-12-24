#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll k, x;
        cin >> k >> x;
        ll ans = k * x + 1;
        cout << ans << "\n";
    }
    return 0;
}
