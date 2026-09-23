#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int w, h, n;
    cin >> w >> h >> n;
    int l = 0, r = max(w, h) * n;
    while (r - l > 1) {
	int mid = (l + r) / 2;
        int cw = mid / w;
        int ch = mid / h;
        __int128 t = ( __int128 )cw * ch;

        if (t >= n)
            r = mid;
        else
            l = mid;
    }

    cout << r;
}

