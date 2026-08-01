#include <bits/stdc++.h>
using namespace std;
#define ff first 
#define ss second

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v) cin >> x;
    vector<int> ans(n, -1);
    stack<pair<int, int>> st; 
    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && st.top().ff <= v[i]) {
            st.pop();
        }
        if (!st.empty()) {
            ans[i] = st.top().ss;
        }
        st.push({v[i], i + 1});
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << ' ';
    }
    return 0;
}