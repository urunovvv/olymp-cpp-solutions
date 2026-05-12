#include <bits/stdc++.h>
#define pb push_back
#define vvi vector<vector<int>>
#define vii vector<int>
using namespace std;
int n;
vvi g;
vii in;
void KAN()
{
    vii res;
    queue<int>q;
    for (int i=1; i<=n; i++)
        if (!in[i]) q.push(i);
    if (q.empty()){
        cout << "NO\n";
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
        g[f].clear();
    }
    if (res.size() != n){
        cout << "NO\n";
        return;
    }
    else{
        cout << "YES\n";
        for (int i:res){
            cout << i << ' ';
        }
    }
}

void top_sort_lesson(){
    vii res;
    for (int i=1; i<=n; i++){
        bool flag = false;
        for (int j=1; j<=n; j++){
            if (in[j] == 0){
                flag = true;
                res.pb(j);
                for (int k=0; k<g[j].size(); k++)
                    in[g[j][k]]--;
                in[j] = -1;
            }
        }
        if (!flag){
            cout << "NO\n";
            return;
        }
    }
    if (res.size() != n)
        cout << "NO\n";
    else{
        cout << "YES\n";
        for (int i:res) cout << i << ' ';
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
    //KAN();
    top_sort_lesson();
}
