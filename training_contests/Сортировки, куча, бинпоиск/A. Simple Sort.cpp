#include <bits/stdc++.h>
using namespace std;
#define vii vector<int>
#define pb emplace_back

vii Merge(vii &a, vii &b){
    vii res;
    int i = 0, j = 0;
    int n = a.size(), m = b.size();
    while (i < n or j < m){
        if (i == n) res.pb(b[j++]);
        else if (j == m) res.pb(a[i++]);
        else if (a[i] < b[j]) res.pb(a[i++]);
        else res.pb(b[j++]);
    }
    return res;
}

vii mergeSort(vii &a){
    int n = a.size();
    if (n <= 1) return a;
    vii l(a.begin(), a.begin() + n / 2);
    vii r(a.begin() + n / 2, a.end());
    vii ll = mergeSort(l);
    vii rr = mergeSort(r);
    return Merge(ll, rr);
}

int main(){
    int n;
    cin >> n;
    vii a(n);
    for (int &i : a) cin >> i;
    vii res = mergeSort(a);
    for (int i : res) cout << i << ' ';
}