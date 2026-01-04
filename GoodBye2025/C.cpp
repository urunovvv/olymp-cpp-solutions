#include <bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
using namespace std;

int func(vector<ll>&v){
    ll cnt=0;
    for (auto &x:v) cnt+=x;
    return cnt;
}

int main(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for (auto &x:v) cin >> x;
    if (func(v) == n){cout << 0; return 0;}
    int i=0;
    while (v.size()>1){
        int len = v.size();
        vector<ll>l(v.begin(), v.begin()+len/2), r(v.begin()+len/2, end(v));
        if (func(l) == l.size()){cout << func(l); return 0;}
        else if (func(r) == r.size()){cout << func(r); return 0;}
        else{
            v = (func(l) > func(r) ? l : r);
        }
    }
}
