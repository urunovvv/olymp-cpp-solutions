#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v) cin >> i;
    int res = 0;
    int l = 0, r = 0;
    unordered_map<int, int> mp;
    while (r < n){
        mp[v[r]]++;
        while (mp[v[r]] > 1){
            mp[v[l]]--;
            l++;
        }
        res = max(res, r - l + 1);
        r++;
    }
    cout << res << endl;
}