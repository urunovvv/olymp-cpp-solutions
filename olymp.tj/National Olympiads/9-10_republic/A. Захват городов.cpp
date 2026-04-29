#include <bits/stdc++.h>
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vector<int>>

using namespace std;
vector<vector<char>> world_map(1001, vector<char>(1001, 0));
int n,m,q,col = 0;
vector<vector<bool>> used(1001, vector<bool>(1001, false));
vector<vector<int>> ans(1001, vector<int>(1001, 0));
void dfs(int i, int j){
    used[i][j] = true;
    col++;
    vi dx = {0, 0, 1, -1};
    vi dy = {1, -1, 0, 0};
    for(int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if(x >= 0 && x < n && y >= 0 && y < m && !used[x][y] && world_map[x][y] == '1'){
            dfs(x, y);
        }
    }
}

void set_ans(int i, int j, int value){
    used[i][j] = true;
    ans[i][j] = value;
    vi dx = {0, 0, 1, -1};
    vi dy = {1, -1, 0, 0};
    for(int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if(x >= 0 && x < n && y >= 0 && y < m && !used[x][y] && world_map[x][y] == '1'){
            set_ans(x, y, value);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> q;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> world_map[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (!used[i][j] && world_map[i][j] == '1'){
                dfs(i, j);
                set_ans(i, j, col);
                col = 0;
            }
        }
    }
    while(q--){
        int x, y;
        cin >> x >> y;
        cout << ans[--x][--y] << '\n';
    }
}