#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string ans;
        for (int i=9; i>0; i--){
            if (i <= n){
                ans += '0'+i;
                n-=i;
            }
        }
        if (n!=0){cout << -1 << '\n'; continue;}
        sort(ans.begin(), ans.end());
        cout << ans << '\n';
    }
    return 0;
}
