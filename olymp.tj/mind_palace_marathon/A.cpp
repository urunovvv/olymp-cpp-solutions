#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string n;
    cin >> n;
    reverse(n.begin(), n.end());
    ll cnt = 0;
    for (ll i=0; i<n.size(); i++){
        cnt += (n[i] - '0') * pow(2, i);
    }
    cout << cnt;
    return 0;
}