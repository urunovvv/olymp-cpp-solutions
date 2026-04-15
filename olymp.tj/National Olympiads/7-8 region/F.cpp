#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = n - 1;
    ll mx = 0;
    while (l < r) {
        mx = max(mx, (min(a[l], a[r]) * (r-l)));
        if (a[l] < a[r])
            l++;
        else
            r--;
    }
    cout << mx;
    return 0;
}
