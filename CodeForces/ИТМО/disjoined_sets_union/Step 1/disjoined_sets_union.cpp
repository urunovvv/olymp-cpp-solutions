#include <bits/stdc++.h>
#define pb emplace_back
using namespace std;
vector<int>p, s;
int find_parent(int x){
    if (x != p[x]){
        p[x] = find_parent(p[x]);
    }
    return p[x];
}

bool get(int x, int y){
    int px = find_parent(x);
    int py = find_parent(y);
    return px == py;
}

void Union(int x, int y){
    int px = find_parent(x);
    int py = find_parent(y);
    if (s[px] < s[py]){
        p[px] = py;
        s[py] += s[px];
    }
    else{
        p[py] = px;
        s[px] += s[py];
    }
}

int main()
{
    int n,m;
    cin >> n >> m;
    s.pb(1);
    p.pb(0);
    for (int i=1; i<=n; i++){
        p.pb(i);
        s.pb(1);
    }
    while(m--){
        string s;
        int u, v;
        cin >> s >> u >> v;
        if (s=="union") Union(u, v);
        else{
            cout << (get(u, v) ? "YES\n" : "NO\n");
        }
    }
}
