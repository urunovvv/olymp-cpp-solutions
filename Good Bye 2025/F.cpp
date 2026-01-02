#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n, '.'));
    int mid = n / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1 || i == mid || j == mid) {
                a[i][j] = '*';
            }
        }
    }
    vector<vector<char>> v = a;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == '.') {
                for (int k = 0; k < 4; k++) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < n && a[ni][nj] == '*') {
                        v[i][j] = '#';
                        break;
                    }
                }
            }
        }
    }
    for (auto i:v){
        for (auto j:i){
            cout << j;
        }
        cout << '\n';
    }

    return 0;
}
