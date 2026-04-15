#include <bits/stdc++.h>
using namespace std;

#define ll long long

int dist(int a, int b, int n) {
    int d = abs(a - b);
    return min(d, n - d);
}

int main() {
    int n;
    cin >> n;
    vector<int> balls;
    vector<int> emp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++)
            balls.push_back(i);
        if (x == 0)
            emp.push_back(i);
    }
    int m = balls.size();
    if (m <= 1) {
        cout << 0;
        return 0;
    }
    ll ans = 1e18+1;
    for (int j = 0; j < m; j++) {
        ll cost = 0;
        for (int i = 0; i < m; i++) {
            int bp = balls[i];
            int ep = emp[(i + j) % m];
            cost += dist(bp, ep, n);
        }
        ans = min(ans, cost);
    }
    cout << ans;
}
