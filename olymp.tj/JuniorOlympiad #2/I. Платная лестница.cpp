#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // ifstream fin("data.txt");
    // ofstream fout("out.txt");
    int n;
    cin >> n;
    vector<ll>v(n), dp(n+1, 0);
    for (ll i=0; i<n; i++){
        cin >> v[i];
    }
    if (n==1){
        cout << v[0];
        return 0;
    }
    dp[0] = 0LL;
    dp[1] = min(v[0], v[1]);
    for (ll i=2; i<=n; i++){
        dp[i] = min(dp[i-1], dp[i-2]) + v[i-1];
    }
    // for (int i:dp){
    //     fout << i << ' ';
    // }
    cout << dp[n];
}