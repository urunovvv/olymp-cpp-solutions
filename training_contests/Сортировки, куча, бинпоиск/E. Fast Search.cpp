#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &a, int x){
    int l = 0, r = a.size();
    while (l < r){
        int mid = (l + r) / 2;
        if (a[mid] >= x){
            r = mid;
        }else l = mid + 1;
    }
    return l;
}

int upperBound(vector<int> &a, int x){
    int l = 0, r = a.size();
    while (l < r){
        int mid = (l + r) / 2;
        if (a[mid] > x)
            r = mid;
        else
            l = mid + 1;
    }
    return l;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(begin(a), end(a));
    int k; cin >> k;
    while (k--){
        int l, r;
        cin >> l >> r;
        int lb = lowerBound(a, l);
        int ub = upperBound(a, r);
        cout << ub - lb << '\n';
    }
}