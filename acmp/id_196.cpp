#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>>v(n, vector<int>(n));
    int left = 0, right = n-1;
    int top = 0, bottom = n-1;
    int cur = 1;
    while (cur <= n*n){
        for (int i=left; i<=right; i++){
            v[top][i] = cur;
            cur++;
        }
        top++;
        for (int j=top; j<=bottom; j++){
            v[j][right] = cur;
            cur++;
        }
        right--;
        for (int k=right; k>=left; k--){
            v[bottom][k] = cur;
            cur++;
        }
        bottom--;
        for (int o=bottom; o>=top; o--){
            v[o][left] = cur;
            cur++;
        }
        left++;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
