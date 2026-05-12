#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>>v(n, vector<int>(n, 0));
    int i = 1;
    v[0][0] = i;
    for (int j = 1; j < n; j++){
        if (j % 2){
            int d = 0;
            for (int k = i; k >= 0; k--){
                v[d++][k] = i++;
            }
        }
        else{
            int d = 0;
            for (int k = 0; k <= i; k++){
                v[k][d--] = i++;
            }
        }
    }
    for (auto i:v){
        for (int j:i){
            cout << j << ' ';
        }
        cout << '\n';
    }
}