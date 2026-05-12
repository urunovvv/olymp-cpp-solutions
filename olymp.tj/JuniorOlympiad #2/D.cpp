#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define vi vector<int>
#define vb vector<bool>
vector<vi>g;
vb vis;

bool has_cycle(int v){
    vis[v] = true;
    cout << v << ' ';
    for (int to : g[v]){
        if (vis[to]){
            return true;
        }
        else{
            has_cycle(to);
        }
    }
    return false;
}

int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    ifstream fin("in.txt");
    ofstream fout("out.txt");
    int n, m;
    fin >> n >> m;
    g.resize(n+1);
    vis.resize(n+1, false);
    while (m--){
        int a,b;
        fin >> a >> b;
        g[a].push_back(b);
    }
    for (int i=1; i<=n; i++){
        
        if (!vis[i]){
            if (has_cycle(i)){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}