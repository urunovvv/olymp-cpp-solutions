#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vii vector<ll>
#define pb emplace_back

ll countInversions = 0;

vii Merge(vii &a, vii &b){
    vii res;
    ll i = 0, j = 0;
    ll n = a.size(), m = b.size();
    while (i < n or j < m){
        if (i == n) res.pb(b[j++]);
        else if (j == m) res.pb(a[i++]);
        else if (a[i] < b[j]) res.pb(a[i++]);
        else {
            countInversions += a.size() - i;
            res.pb(b[j++]);
        }
    }
    return res;
}

vii mergeSort(vii &a){
    ll n = a.size();
    if (n <= 1) return a;
    vii l(a.begin(), a.begin() + n / 2);
    vii r(a.begin() + n / 2, a.end());
    vii left = mergeSort(l);
    vii right = mergeSort(r);
    return Merge(left, right);
}

int main(){
    ll n;
    cin >> n;
    vii a(n);
    for (ll &i : a) cin >> i;
    mergeSort(a);
    cout << countInversions;
}