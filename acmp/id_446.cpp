#include <bits/stdc++.h>

using namespace std;
bool solve(char &c, int &i)
{
    if (c=='.') return true;
    else if (c=='R' and i > 3) return true;
    else if (c=='G' and (i==2 or i==3 or i==6 or i==7)) return true;
    else if (c=='B' and i%2) return true;
    return false;
}
int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<char>>t(n, vector<char>(m));
    for (auto &i:t){
        for (auto &j:i){
            cin >> j;
        }
    }
    vector<vector<int>>ad(n,vector<int>(m));
    for (auto &i:ad){
        for (auto &j:i){
            cin >> j;
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (!solve(t[i][j], ad[i][i])){
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
    return 0;
}
