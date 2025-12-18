#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string a,b,c, res="";
        cin >> a >> b >> c;
        res += a[0];
        res += b[0];
        res += c[0];
        cout << res << '\n';
    }
    return 0;
}
