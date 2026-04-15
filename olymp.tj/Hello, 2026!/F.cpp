#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 1; i <= n; i++) a.push_back(i);
    int idx = 0;
    while (a.size() > 1) {
        idx = (idx + k - 1) % a.size();
        a.erase(a.begin() + idx);
    }
    cout << a[0];
    return 0;
}
