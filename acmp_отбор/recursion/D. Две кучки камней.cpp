#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int ans = INT_MAX;
int n;

void rec(int id, int l, int r){
    if (id == n){
        ans = min(ans, abs(l - r));
    }
    rec(id+1, l + v[id], r);
    rec(id+1, l, r + v[id]);
}

int main(){
    cin >> n;
    v.resize(n, 0);
    for (int &i : v) cin >> i;
    rec(0, 0, 0);
    cout << ans;
    return 0;
}