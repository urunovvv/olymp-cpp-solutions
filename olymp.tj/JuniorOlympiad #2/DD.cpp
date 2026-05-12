#include <bits/stdc++.h>
#define pb emplace_back
using namespace std;

int main() {    
    int n, m;    
    cin >> n >> m;    
    vector<vector<int>> v(n + 1);    
    vector<int> in_pow(n + 1, 0);    
    while (m--) {        
        int u, v;        
        cin >> u >> v;        
        v[u].pb(v);        
        in_pow[v]++;    
    }    
    int cnt = 0;    
    vector<int> q;    
    for (int i = 1; i <= n; ++i) {        
        if (in_pow[i] == 0) {            
            q.pb(i);        
        }    
    }    
    int i = 0;    
    while (i < q.size()) {        
        int u = q[i++];        
        cnt++;        
        for (int v : v[u]) {            
            in_pow[v]--;            
            if (in_pow[v] == 0) {                
                q.push_back(v);            
            }        
        }    
    }    
    cout << (cnt == n ? "YES" : "NO");
    return 0;
}