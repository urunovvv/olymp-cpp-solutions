#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>>g(n+1);
    bool f = false;
    while (m--){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
        if (g[a].size() > 1 or g[b].size() > 1) f = true;
    }
    if(!f) {cout << "YES"; return 0;}
    for (int i=1; i<n; i++){
        for (int j=1; j<n; j++){
            for (int k=1; j<n; k++){
                bool a = g[i].find(j) == g[i].end();
                bool b = g[i].find(k) == g[i].end();
                bool c = g[j].find(k) == g[j].end();
                if (a || b || c){
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    cout << "YES";
}