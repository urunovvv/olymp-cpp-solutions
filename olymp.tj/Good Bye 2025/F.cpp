#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<char>> v(n+2, vector<char>(n+2, '.'));
    int mid = n / 2 + 1;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (i==j or i+j==n+1 or i== mid or j==mid){
                v[i][j] = '*';
            }
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (v[i][j]=='*'){
                if (v[i+1][j]!='*'){
                    v[i+1][j] = '#';
                }
                if (v[i-1][j]!='*'){
                    v[i-1][j] = '#';
                }
                if (v[i][j+1]!='*'){
                    v[i][j+1] = '#';
                }
                if (v[i][j-1]!='*'){
                    v[i][j-1] = '#';
                }
            }
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
