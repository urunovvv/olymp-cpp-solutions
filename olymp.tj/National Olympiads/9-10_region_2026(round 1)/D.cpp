#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v) cin >> x;
    int l = 0, r = n - 1;
    while (l < r) {
        cout << v[l++] << ' ';
        if (l <= r) cout << v[l++] << ' ';
        if (l <= r) cout << v[r--] << ' ';
        if (l <= r) cout << v[r--] << ' ';
    }
    if (l == r) cout << v[l];

    return 0;
}
