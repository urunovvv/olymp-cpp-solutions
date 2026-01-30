#include <bits/stdc++.h>
#define pb emplace_back
using namespace std;
vector<int>p, s, mx, mn;
int n,m;
int find_parent(int x){
    if (x != p[x]){
        p[x] = find_parent(p[x]);
    }
    return p[x];
}


void Union(int x, int y){
    int px = find_parent(x);
    int py = find_parent(y);
    if (s[px] < s[py]){
        p[px] = py;
        s[py] += s[px] * (px!=py);
        //if (s[py] > n) s[py] = n;
        mn[py] = min(mn[py], mn[px]);
        mx[py] = max(mx[py], mx[px]);
    }
    else{
        p[py] = px;
        s[px] += s[py] * (px!=py);
        //if (s[px] > n) s[px] = n;
        mn[px] = min(mn[py], mn[px]);
        mx[px] = max(mx[py], mx[px]);
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    s.pb(1);
    p.pb(0);
    mx.pb(-1e5);
    mn.pb(1e5);
    for (int i=1; i<=n; i++){
        p.pb(i);
        s.pb(1);
        mx.pb(i);
        mn.pb(i);
    }
    while(m--){
        string q;
        int u, v;
        cin >> q >> u;
        if (q=="union") {cin >> v; Union(u, v);}
        else{
            int uu = find_parent(u);
            cout << mn[uu] << ' ' << mx[uu] << ' ' << s[uu] << '\n';
        }
    }
}
