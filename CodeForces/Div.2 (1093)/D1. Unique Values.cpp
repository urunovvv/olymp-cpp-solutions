#include <bits/stdc++.h>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define ff first
#define ss second
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, vector<int>> pos;
        for (int i = 1; i <= 2 * n + 1; i++) {
            int x;
            cin >> x;
            pos[x].pb(i);
        }
        for (auto &it : pos) {
            if (it.ss.size() == 3) {
                cout << it.ss[0] << " "
                     << it.ss[1] << " "
                     << it.ss[2] << '\n';
                break;
            }
        }
    }
    return 0;
}