#include <bits/stdc++.h>
using namespace std;

int ask(int i, int j) {
    cout << "? " << i << " " << j << '\n';
    cout.flush();

    int x;
    cin >> x;
    if (x == -1) {
        exit(0);
    }
    return x;
}

void answer(int k) {
    cout << "! " << k << '\n';
    cout.flush();
}

void solve() {
    int n;
    cin >> n;
    if (ask(1, 2) == 1) {
        answer(1);
        return;
    }
    if (ask(2, 3) == 1) {
        answer(2);
        return;
    }
    if (ask(1, 3) == 1) {
        answer(1);
        return;
    }
    for (int i = 4; i <= 2 * n - 1; i += 2) {
        if (ask(i, i + 1) == 1) {
            answer(i);
            return;
        }
    }
    answer(2 * n);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
