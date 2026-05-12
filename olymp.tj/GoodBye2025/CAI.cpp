#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + a[i];
    }
    int mx = 0;
    stack<pair<int, int>> st;
    st.emplace(0, n - 1);
    while (!st.empty()) {
        auto [l, r] = st.top();
        st.pop();
        int size = r - l + 1;
        int ones = pref[r + 1] - pref[l];
        if (ones == size) {
            mx = max(mx, size);
            continue;
        }
        if (size == 1) continue;
        int half = size / 2;
        int left_l = l;
        int left_r = l + half - 1;
        int right_l = l + half;
        int right_r = r;

        if (left_l <= left_r) {
            st.emplace(left_l, left_r);
        }
        if (right_l <= right_r) {
            st.emplace(right_l, right_r);
        }
    }

    cout << mx << endl;
    return 0;
}
