#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>>graph;
vector<int> color;

bool bip = true;
int clr1 = 0, clr2 = 0;
// int bfs(int from, int c){
//     color[from] = c;
//     queue<int> q;
//     q.push(from);
//     int clr1 = 0, clr2 = 0;
//     while (!q.empty()){
//         int cur = q.front();
//         q.pop();
//         if (color[cur] == 1) clr1++;
//         else if (color[cur] == 2) clr2++;
//         for (int to : graph[cur]){
//             if (color[to] == 0){
//                 color[to] = (color[cur] == 1 ? 2 : 1);
//                 q.push(to);
//             } else if (color[to] == color[cur]){
//                 return 0;
//             }
//         }
//     }
//     return max(clr1, clr2);
// }

void dfs(int from, int clr){
    color[from] = clr;
    clr1 += clr == 1;
    clr2 += clr == 2;
    for (int to : graph[from]){
        if (color[to] == clr) {
            bip = false;
        }else if (color[to] == 0){
            dfs(to, clr == 1 ? 2 : 1);
        }
    }
}

void urunov()
{
    clr1 = 0; clr2 = 0; bip = true;
    int n, m;
    cin >> n >> m;
    graph.assign(n + 1, {});
    color.assign(n + 1, 0);
    int res = 0;
    while (m--){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i=1; i<=n; i++){
        if (color[i] == 0){
            dfs(i, 1);
            if (bip) res += max(clr1, clr2);
        }
        clr1 = 0; clr2 = 0; bip = true;
    }
    cout << res << '\n';
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) urunov();
}