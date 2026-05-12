#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    bool m[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> m[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i == j) continue;
            if (m[i][j] == true){
                cnt++;
            }
        }
    }
    cout << cnt/2;
    return 0;
}
