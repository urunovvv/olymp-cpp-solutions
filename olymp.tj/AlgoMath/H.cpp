#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    ll w = 0;
    for (int i = 0; i < k; i++) {
        w += v[i];
    }
    ll best = w;
    for (int i = k; i < n; i++) {
        w = w - v[i - k] + v[i];
        best = max(best, w);
    }
    cout << sum + best;
    return 0;
}
