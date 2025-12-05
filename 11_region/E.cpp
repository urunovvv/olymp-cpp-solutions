#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    stack<int> st;
    ll ans = 0;
    for (int i = 0; i <= n; i++) {
        ll h = (i == n ? 0 : a[i]);
        while (!st.empty() && h < a[st.top()]) {
            ll height = a[st.top()];
            st.pop();
            ll r = i;
            ll l = st.empty() ? 0 : st.top() + 1;
            ll width = r - l;
            ans = max(ans, height * width);
        }
        st.push(i);
    }
    cout << ans;
    return 0;
}
