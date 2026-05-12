#include <bits/stdc++.h>
using namespace std;

int g[101][101];
bool used[101];

bool dfs(int v, int p) {
    used[v] = true;
    for (int to : g[v]) {
        if (to){
            if (!used[to]) {
                if (dfs(to, v)) return true;
            }
            else if (to != p) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    bool diag = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            cin >> g[i][j];
        }
        if (g[i][i]) diag = true;
    }
    if (diag){cout << "YES\n"; return 0;}
    /*for (int i = 0; i < n; i++) {
        if (!used[i]) {
            if (dfs(i, -1)) {
                cout << "YES";
                return 0;
            }
        }
    }*/
    cout << "NO";
}
