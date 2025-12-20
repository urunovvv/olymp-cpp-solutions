#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int k=0; k<t; k++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        cout << ((a==b and b==c and c==d and a==d) ? "YES\n" : "NO\n");
    }
    return 0;
}
