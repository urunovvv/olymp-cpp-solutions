#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> items(n);
    for (int i = 0; i < n; i++) {
        cin >> items[i].ff >> items[i].ss;
    }
    double l = 0, r = 1e6;
    for (int step = 0; step < 100; step++) {
        double mid = (l + r) / 2.0;
        vector<pair<double, int>> temp(n);
        for (int i = 0; i < n; i++) {
            temp[i].ff = items[i].ff - mid * items[i].ss;
            temp[i].ss = i + 1;
        }
        sort(temp.rbegin(), temp.rend());
        double cur = 0;
        for (int i = 0; i < k; i++) {
            cur += temp[i].ff;
        }

        if (cur >= 0) {
            l = mid;
        } else {
            r = mid;
        }
    }
    vector<pair<double, int>> res(n);
    for (int i = 0; i < n; i++) {
        res[i].ff = items[i].ff - l * items[i].ss;
        res[i].ss = i + 1;
    }
    sort(res.rbegin(), res.rend());
    for (int i = 0; i < k; i++) {
        cout << res[i].ss << '\n';
    }
    return 0;
}
