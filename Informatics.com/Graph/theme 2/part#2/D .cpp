#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<int>>g(101);

vector<int> bfs(int s){
    vector<int> used(n+1);
    queue<int> q;
    q.push(s);
    used[s]=true;
    while(!q.empty()){
        int v=q.front(); q.pop();
        for(int to:g[v]){
            if(!used[to]){
                used[to]=1;
                q.push(to);
            }
        }
    }
    return used;
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
        vector<int> A=bfs(a);
        vector<int> B=bfs(b);
        int ans=0;
        for(int i=1;i<=n;i++)
            if(A[i] && B[i]) ans++;
        cout<<ans<<"\n";
    }
}
