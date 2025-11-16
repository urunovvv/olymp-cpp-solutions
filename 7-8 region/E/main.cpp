#include <bits/stdc++.h>
#include <vector>
#define pb push_back
#define len size()
#define ll long long
using namespace std;

vector<ll> merg(vector<ll>&a, vector<ll>&b){
    vector<ll>res;
    ll i=0, j=0;
    while(i<a.len or j<b.len){
        if (j==b.len){res.pb(a[i]);i++;continue;}
        else if (i==a.len){res.pb(b[j]);j++;continue;}
        if (a[i] <= b[j]){
            res.pb(a[i]);
            i++;
        }
        else{
            res.pb(b[j]);
            j++;
        }
    }
    return res;
}

vector<ll> merge_sort(vector<ll>&a){
    if (a.len==1) return a;
    ll mid = a.len/2;
    vector<ll>l(a.begin(), a.begin()+mid), r(a.begin()+mid, a.end());
    l = merge_sort(l);
    r = merge_sort(r);
    vector<ll>res=merg(l, r);
    return res;
}

ll bin_search(vector<ll>&a, ll num){
    ll l = -1, r = a.len;
    while (l + 1 < r){
        ll mid = (l + r) / 2;
        if (a[mid] < num) l = mid;
        else r = mid;
    }
    return r;
}

int main(){
    ll n, m;
    cin >> n >> m;
    vector<ll>a(n), b(m);

    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<m; i++) cin >> b[i];
    a = merge_sort(a);
    for (int i=0; i<m; i++){
        ll pos = bin_search(a, b[i]);
        cout << pos + 1 << " ";
    }
}
