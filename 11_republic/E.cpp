#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<string>matrix1(n), matrix2(n);
    for (int i=0; i<n; i++){
        cin >> matrix1[i];
    }
    for (int i=0; i<n; i++){
        string s;
        cin >> s;
        for (char &c :s){c = (c=='W' ? 'B' : 'W');}
        matrix2[i] = s;
    }
    int cnt = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cnt += (matrix1[i][j] != matrix2[i][j]);
        }
    }
    cout << cnt;
}