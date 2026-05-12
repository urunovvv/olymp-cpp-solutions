#include <bits/stdc++.h>
using namespace std;
vector<vector<bool>>used(100, vector<bool>(100, false));
int n,m;
vector<string>paper;
void dfs(int x, int y)
{
    used[x][y] = true;
    vector<int>xx = {0, 0, 1,-1};
    vector<int>yy = {1, -1,0, 0};
    for (int i=0; i<4; i++){
        int new_x = xx[i] + x;
        int new_y = yy[i] + y;
        if (new_y < 0 or new_x < 0 or new_y >= m or new_x >= n) continue;
        if (!used[new_x][new_y] and paper[new_x][new_y] == '#'){
            dfs(new_x, new_y);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i=0; i<n; i++){
        string s;
        cin >> s;
        paper.push_back(s);
    }
    int pieces = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (paper[i][j] == '#' and !used[i][j]){
                dfs(i, j);
                pieces++;
            }
        }
    }
    cout << pieces;
}
