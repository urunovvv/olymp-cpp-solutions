#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pref(1001, vector<int>(1001, 0));

int response(int x1, int y1, int x2, int y2){
    return pref[x2][y2] - pref[x1-1][y2] - pref[x2][y1-1] + pref[x1-1][y1-1]; 
}

int main(){
    int n, m, q;
    cin >> n >> m >> q;
    vector<string> matrix(1001);
    for (int i = 0; i < n; i++){
        cin >> matrix[i];
        for (int j = 0; j < m; j++){
            pref[i+1][j+1] = pref[i][j+1] + pref[i+1][j] - pref[i][j] + (matrix[i][j] == '#');
        }
    }
    while (q--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << response(x1, y1, x2, y2) << '\n';
    }
}