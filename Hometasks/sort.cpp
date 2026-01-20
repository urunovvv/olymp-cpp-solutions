#include <bits/stdc++.h>
#define pb emplace_back
#define len size()
#define ll long long
using namespace std;

vector<ll> merg(vector<ll>a, vector<ll>b){
    vector<ll>res;
    ll i=0, j=0;
    while(i<a.len or j<b.len){
        if (j==b.len){res.pb(a[i]);i++;continue;}
        else if (i==a.len){res.pb(b[j]);j++;continue;}
        if (a[i] <= b[j]){
            res.pb(a[i]);
            i++;}
        else{
            res.pb(b[j]);
            j++;
        }
    }
    return res;
}

vector<ll> merge_sort(vector<ll>a){
    if (a.len==1) return a;
    ll mid = a.len/2;
    vector<ll>l(a.begin(), a.begin()+mid), r(a.begin()+mid, a.end());
    l = merge_sort(l);
    r = merge_sort(r);
    vector<ll>res=merg(l, r);
    return res;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll>v(n);
    for (auto &i:v) cin >> i;
    for (ll x:merge_sort(v)){
        cout << x << " ";}
    return 0;
}
