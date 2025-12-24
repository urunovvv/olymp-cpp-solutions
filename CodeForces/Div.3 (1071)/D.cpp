#include <bits/stdc++.h>
using namespace std;

vector<int> urunov(int n) {
    if (n == 0) return {0};
    vector<int> prev = urunov(n - 1);
    vector<int> res;
    int add = 1 << (n - 1);
    for (int x : prev)
        res.push_back(x + add);
    for (int x : prev)
        res.push_back(x);

    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ans = urunov(n);
        for (int x : ans)
            cout << x << ' ';
        cout << '\n';
    }
    return 0;
}
