#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num;
    int mn=1e5, mx = -1e5;
    bool odd=false;
    while(cin >> num){
        if (!odd) {mn = min(mn, num); odd = true;}
        else {mx = max(mx, num); odd = false;}
    }
    cout << mx+mn << '\n';
    return 0;
}
