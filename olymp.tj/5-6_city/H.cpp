#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for (auto &x : v){
        cin >> x;
    }
    vector<ll>a(v.begin(), v.end());
    sort(a.begin(), a.end());
    cout << (v[0] == a[n-1] or v[0] == a[n-2] ? "YES" : "NO");
    return 0;
}