#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, cnt=0;
        cin >> n;
        vector<int>a(n),b(n);
        for (auto &x:a) {cin >> x; cnt+=x;}
        for (int i=0; i<n; i++){
            cin >> b[i];
            cnt += b[i];
        }
        if (!(cnt%2)) {
            cout << "Tie\n";
            continue;
        }
        bool win;
        for (int i=n-1; i>=0; i--){
            if (a[i] != b[i]){
                win = (!(i%2) ? true : false);
                break;
            }
        }
        cout << (win ? "Ajisai\n" : "Mai\n");
    }
    return 0;
}
