#include <bits/stdc++.h>
#define ll long long
using namespace std;

void urunov(){
    ll n,c,k;
    cin >> n >> c >> k;
    vector<int>v(n);
    for (int &i:v) cin >> i;
    sort(begin(v), end(v));
    for (int i=0; i<n; i++){
        if (v[i] > c){
            break;
        }
        ll d = min(k, c - v[i]);
        k -= d;
        c += v[i] + d;
    }
    cout << c << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--)
        urunov();
}
 