#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    vector<ll> a(n+1, 0), pref(n+1, 0), suff(n+2, 0);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        pref[i] = pref[i-1] + a[i];
    }
    for (int i = n; i >= 1; i--){
        suff[i] = suff[i+1] + a[i];
    }
    for (int i=0; i<n; i++){
        cout << pref[i+1] - suff[i+1] << ' ';
    }
}