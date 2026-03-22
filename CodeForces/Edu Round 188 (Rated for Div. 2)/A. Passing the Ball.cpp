#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    string s;
    cin >> n >> s;
    vector<bool>used(n, false);
    int i=0, cnt = 0;
    do{
        cnt++;
    }while(s[i++] == 'R');
    cout << cnt << '\n';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
