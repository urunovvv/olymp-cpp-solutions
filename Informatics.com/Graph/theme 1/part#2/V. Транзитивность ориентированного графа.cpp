#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> g(n, vector<int>(n, 0));
    for (auto &i:g){
        for (auto &j:i)
            cin >> j;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (g[i][j] and g[j][k]) {
                    if (g[i][k] == 0 and i != k) {
                        cout << "NO";
                        return 0;
                    }
                }
            }
        }
    }

    cout << "YES";
    return 0;
}
