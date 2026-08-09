#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> world_map(1001, vector<char>(1001, 0));
vector<vector<bool>> used(1001, vector<bool>(1001, false));
int n, m;

void dfs(int i, int j){
    used[i][j] = true;
    vector<int> dx = {0, 0, 1, -1};
    vector<int> dy = {1, -1, 0, 0};
    for(int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if(x >= 0 && x < n && y >= 0 && y < m && !used[x][y] && world_map[x][y] == '1'){
            dfs(x, y);
        }
    }
}

int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){    
            cin >> world_map[i][j];
        }
    }
    int comps = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (!used[i][j] and world_map[i][j] == '1'){
                dfs(i, j);
                comps++;
            }
        }
    }
    cout << comps;
}