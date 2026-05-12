#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long w, h, n;
    cin >> w >> h >> n;
    long long l = 0, r = max(w, h) * n;
    while (r - l > 1) {
        long long mid = (l + r) / 2;
        __int128_t cur = (__int128_t)(mid / w) * (mid / h);
        if (cur >= n)
            r = mid;
        else
            l = mid;
    }
    cout << r << '\n';
    return 0;
}
