#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

vector<vector<int>> g;
vector<bool> used(100, false);
int cnt = 0;

void dfs(int v){
    used[v] = true;
    cnt++;
    for(int to : g[v]){
        if (to){
            if(!used[to])
                dfs(to);
        }
    }
}
int main(){
    int n;
    cin >> n;
    //g.resize(n, vector<int>(n));
    int edges = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int a; cin >> a;
            if (a){g[i].pb(j); g[j].pb(i);}
            if(a && j < i)
                edges++;
        }
    }
    dfs(0);
    cout << (edges == n - 1 && cnt == n ? "YES\n" : "NO\n");
}
