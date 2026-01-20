#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> res(n + 1, 0);
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        for (int j = 0; j <= y; j++) {
            int pos = x + j * k;
            if (pos <= n) {
                res[pos]++;
              }
            else {
                break;
            }
        }
    }
    for (int i=1; i<=n; i++) cout << res[i] << ' ';
    return 0;
}
