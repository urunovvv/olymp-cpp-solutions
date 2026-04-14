#include <bits/stdc++.h>
using namespace std;
char a[105][105];
string s;
int n,m,ans;

void dfs(int i, int j){
    int nx[] = {0, 0, 1, -1, -1, -1, 1, 1};
    int ny[] = {1, -1, 0, 0, 1, -1, 1, -1};
    string cur = "";
    for (int k=0; k<8; k++){
        int x = i + nx[k];
        int y = j + ny[k];
        if (x < 0 || x >= n || y < 0 || y >= m) continue;
        cur += a[x][y];
    }   
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> s >> n >> m;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

}