#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &p : v) cin >> p.ff >> p.ss;
    sort(v.begin(), v.end());
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++) {
        pair<int, int> p = v[i]; 
        if (ans.empty() || ans[ans.size() - 1].ss < p.ff) {
            ans.push_back(p);
        } else {
            ans[ans.size() - 1].ss = max(ans[ans.size() - 1].ss, p.ss);
        }
    }
    cout << ans.size() << endl;
    for (auto &p : ans) {
        cout << p.ff << " " << p.ss << endl;
    }
}