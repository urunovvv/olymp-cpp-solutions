#include <bits/stdc++.h>
#define pb push_back
#define vvi vector<vector<int>>
#define vii vector<int>
using namespace std;
int n, cnt = 1; vii in;
vector<set<int>>g, g1;
vector<bool>vis(2e5, false);
vii KAN(){
    vii res;
    queue<int>q;
    for (int i=1; i<=n; i++)
        if (!in[i]) q.push(i);
    if (q.empty()){
        cout << "No\n";
        return {};
    }
    while (!q.empty()){
        int f = q.front();
        q.pop();
        res.pb(f);
        for (int to : g[f]){
            in[to]--;
            if (!in[to])q.push(to);
        }
        // g[f].clear();
    }
    // if (res.size() != n){
    //     cout << "No\n";
    //     return;
    // }
    // else{
    //     cout << "Yes\n";
    //     for (int i:res){
    //         cout << i << ' ';
    //     }
    // }
    return reverse(begin(res), end(res));
}

void reverse_graph(vvi g){
    vvi rev(g.size());
    for (int i=1; i<=g.size(); i++){
        
    }
}

void dfs(int v, vvi g){
    vis[v] = true;
    for (auto to : g[v]){
        if (!vis[to]) 
            dfs(to);
    }
}

int main(){
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int m;
    fin >> n >> m;
    g.resize(n+1);
    in.resize(n+1, 0);
    while (m--){
        int a,b;
        fin >> a >> b;
        g[a].push_back(b);
        in[b]++;
    }
    vector<int> vertexes = KAN();
    vvi rev = reverse_graph(g);
    int cnt = 1;
    for (int i : rev){
        if (!vis[i]) {
            dfs(i);
        }
        cnt++;
    }
    fout << cnt << '\n';
}
