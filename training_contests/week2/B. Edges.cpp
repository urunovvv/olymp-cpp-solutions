#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int q;
    cin >> q;
    vector<int> v(n), queries(q);
    for (int &i : v) cin >> i;
    for (int &i : queries) cin >> i;

    for (int x : queries){
        int l = 0, r = n - 1;
        while (l < r){
            int mid = (l + r) / 2;
            if (v[mid] >= x) r = mid;
            else l = ++mid;
        }
        cout << l + (x > v[n-1]) << ' ';
    }
}