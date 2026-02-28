#include <bits/stdc++.h>
using namespace std;
void urunov(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (!n%2){
        cout << "NO\n";
        return;
    }
    vector<vector<bool>>dp(n+1, vector<bool>(n+1, false));
    for (int i=0; i<=n; i++) dp[i][i] = true;
    for (int h=2; h<=n; h+=2){
        for (int i=0; i<n-h-1; i++){
            int j = i + h;
            for (int k=i+1; k<j; k+=2){
                if(dp[i+1][k] and dp[k+1][j]){
                    dp[i][j] = true;
                    break;
                }
            }
        }
    }
    cout << (dp[0][n] ? "YES\n" : "NO\n");
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        urunov();
    }
}