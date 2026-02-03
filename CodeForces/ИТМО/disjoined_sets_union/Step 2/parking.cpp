#include <bits/stdc++.h>
using namespace std;

vector<int> p;

int fp(int x) {
    if (p[x] == x) return x;
    return p[x] = fp(p[x]);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    p.resize(n + 2);
    for (int i = 1; i <= n + 1; i++)
        p[i] = i;
    for (int i = 0; i < n; i++) {
        int want;
        cin >> want;
        int pos = fp(want);
        if (pos > n) pos = fp(1);
        cout << pos << ' ';

        p[pos] = fp(pos + 1);
    }
}
