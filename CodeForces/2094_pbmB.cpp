#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,m,l,r;
        cin >> n >> m >> l >> r;
        pair<int, int>lr={l,r};
        while(m>0){
            m--;
            if(r>l) l++;
        }
        cout << l << ' ' << r << '\n';
    }
    return 0;
}
