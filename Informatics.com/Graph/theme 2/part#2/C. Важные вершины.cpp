#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<int>> g(1e5);

bool bfs(int a,int b,int ban){
    queue<int> q;
    vector<int> used(n+1);
    q.push(a);
    used[a]=1;
    while(!q.empty()){
        int v=q.front(); q.pop();
        for(int to:g[v]){
            if(to==ban) continue;
            if(!used[to]){
                used[to]=true;
                q.push(to);
            }
        }
    }
    return used[b];
}

int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        int ans=0;
        for(int c=1;c<=n;c++){
            if(c==a||c==b) continue;
            if(!bfs(a,b,c)) ans++;
        }
        cout<<ans<<"\n";
    }
}