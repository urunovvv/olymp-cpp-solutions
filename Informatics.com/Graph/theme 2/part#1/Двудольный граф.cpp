#include <bits/stdc++.h>
using namespace std;
vector<int>colors(1e5, -1);
vector<bool>used(1e5, false);
vector<vector<int>>g;
int clr = 1;
bool dfs(int x, int c){
    used[x] = true;
    colors[x] = c;
    for (int to : g[x]){
        if (!used[to]){
            (++c)%=2;
            dfs(to,c);
        }
        else{
            if (colors[x] == colors[to]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    used[0] = true;
    int n,m;
    cin >> n >> m;
    g.resize(n+1);
    bool res;
    while(m--){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for (int i=1; i<=n; i++){
            res = dfs(i, clr);
            (++clr)%=2;
            if (!res) {
                cout << "NO";
                return 0;
            }
    }
    cout << "YES";
}
