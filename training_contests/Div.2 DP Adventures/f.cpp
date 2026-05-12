#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
int main(){
    int w, n;
    cin >> w >> n;
    vector<pair<int, int>>items(n);
    for (auto &p : items) cin >> p.ff >> p.ss;
    vector<int> dp(w + 1);
    for (int i = 0; i < n; i++){
        for (int j = w; j >= items[i].ff; j--){
            dp[j] = max(dp[j], dp[j - items[i].ff] + items[i].ss);
        }
    }
    cout << dp[w];
}