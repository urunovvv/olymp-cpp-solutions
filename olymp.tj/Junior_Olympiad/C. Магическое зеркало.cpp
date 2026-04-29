#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second

void urunov(){
    int n;
    cin >> n;
    vector<int>v(n);
    for (int &i:v) cin >> i;
    int l, r;
    cin >> l >> r;
    reverse(v.begin() + l - 1, v.begin() + r);
    for (int i:v) cout << i << ' ';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--){
        urunov();
    }
}