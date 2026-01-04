#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    if (n == 0) return 0;

    vector<vector<int>> v(n, vector<int>(n));
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int cur = 1;
    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; ++j)
            v[top][j] = cur++;
        for (int i = top + 1; i <= bottom; ++i)
            v[i][right] = cur++;
        if (right - 1 >= left) {
            for (int i = bottom; i >= top + 1; --i)
                v[i][right - 1] = cur++;
        }
        if (top + 1 <= bottom && right - 2 >= left) {
            for (int j = right - 2; j >= left; --j)
                v[top + 1][j] = cur++;
        }
        top += 2;
        right -= 2;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
}
