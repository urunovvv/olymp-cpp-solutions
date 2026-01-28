#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    while (q--) {
        long long x;
        cin >> x;
        if (binary_search(a.begin(), a.end(), x)) {
            cout << "0\n";
            continue;
        }
        int pos = upper_bound(a.begin(), a.end(), x) - a.begin();
        int cnt = n - pos;
        if (cnt % 2 == 0)
            cout << "POSITIVE\n";
        else
            cout << "NEGATIVE\n";
    }
    return 0;
}

