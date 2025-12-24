#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    ll d;
    cin >> n >> d;
    vector<pair<ll,int>> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    vector<ll> last;
    vector<int> ans(n, 0);
    for (auto &p : a) {
        int found = -1;
        for (int i = 0; i < last.size(); i++) {
            if (p.first - last[i] > d) {
                found = i;
                break;
            }
        }
        if (found == -1) {
            last.push_back(p.first);
            ans[p.second] = last.size();
        }
        else {
            last[found] = p.first;
            ans[p.second] = found + 1;
            }
    }
    cout << last.size() << "\n";
    for (auto x:ans) cout << x << ' ';
    cout << "\n";
    return 0;
}
