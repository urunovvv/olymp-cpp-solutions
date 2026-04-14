#include <bits/stdc++.h>
#define pb push_back
#define vvi vector<vector<int>>
#define vii vector<int>
using namespace std;
int n;
vvi g;
vii in;
vii order;
vector<bool>used(n+1, false);

void KAN(){
    vii res;
    queue<int>q;
    for (int i=1; i<=n; i++)
        if (!in[i]) q.push(i);
    if (q.empty()){
        cout << "-1\n";
        return;
    }
    while (!q.empty()){
        int f = q.front();
        q.pop();
        res.pb(f);
        for (int to : g[f]){
            in[to]--;
            if (!in[to])q.push(to);
        }
    }
    if (res.size() != n){
        cout << "-1\n";
        return;
    }
    else{
        vector<int>res1(n+1, 0);
        for (int i=1; i<=n; i++){
            res1[res[i]] = i;
        }
        for (int i:res1) cout << i << ' ';
    }
}
int main(){
    int m;
    cin >> n >> m;
    g.resize(n+1);
    in.resize(n+1, 0);
    while (m--){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        in[b]++;
    }
    KAN();
}
