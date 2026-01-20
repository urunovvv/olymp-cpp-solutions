#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> h1(n+1), h2(n+1);
    for (int i = 1; i <= n; i++) cin >> h1[i];
    for (int i = 1; i <= n; i++) cin >> h2[i];
    vector<ll> dp1(n+1, 0), dp2(n+1, 0);
    vector<ll> p1(n+1, 0), p2(n+1, 0);
    for (int i = 1; i <= n; i++) {
        dp1[i] = h1[i] + p2[i-1];
        dp2[i] = h2[i] + p1[i-1];
        p1[i] = max(p1[i-1], dp1[i]);
        p2[i] = max(p2[i-1], dp2[i]);
    }
    cout << max(p1[n], p2[n]);
    return 0;
}
