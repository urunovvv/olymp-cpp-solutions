#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    vector<ll>a(3), b(3);
    for (ll &e : a) cin >> e;
    for (ll &e : b) cin >> e;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll cnt = 0;
    for (int i=0; i<3; i++){
        cnt += a[i]*b[i];
    }
    cout << cnt;
    return 0;
}
