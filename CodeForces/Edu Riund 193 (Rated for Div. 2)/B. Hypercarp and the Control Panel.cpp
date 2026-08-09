#include <bits/stdc++.h>

using namespace std;

void urunov() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> clr;
    vector<int> lns;
    for (int i = 0; i < n; ++i) {
        if (clr.empty() || a[i] != clr.back()) {
            clr.push_back(a[i]);
            lns.push_back(1);
        } else {
            lns.back()++;
        }
    }
    int k = clr.size();
    for (int i = 0; i < k - 1; ++i) {
        if (lns[i] >= 2 && lns[i + 1] >= 2) {
            cout << k + 2 << "\n";
            return;
        }
    }
    for (int i = 0; i < k; ++i) {
        if (lns[i] >= 2) {
            bool b1 = (i >= 1) && (i == 1 || clr[i - 2] != clr[i]);
            bool b2 = (i <= k - 2) && (i == k - 2 || clr[i + 2] != clr[i]);
            if (b1 || b2) {
                cout << k + 1 << "\n";
                return;
            }
        }
    }
    cout << k << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);;
    int t;
    cin >> t;
    while (t--) urunov();
    return 0;
}