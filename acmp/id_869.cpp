#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, d;
    cin >> n >> d;
    vector<int>v(n);
    for (int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = 1e9;
    int l=0, r=n-1;
    int cnt = 0;
    while (l <= r){
        if (v[l]+v[r] > d) {r--; cnt++;}
        else if (v[l] + v[r] <= d){
            r--;
            l++;
            cnt++;
        }
    }
    if (cnt > 0) ans = min(cnt, ans);
    cout << ans;
    return 0;
}
