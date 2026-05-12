#include <bits/stdc++.h>
using namespace std;
vector<int>p, s(200000, 1);
int fp(int x){
    if (x == p[x]) return x;
    p[x] = fp(p[x]);
    return p[x];
}

void Union(int x, int y){
    int px = fp(x);
    int py = fp(y);
    if (px == py) return;
    if (s[px] < s[py]) swap(px, py);
    p[py] = px;
    s[px] += s[py];
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,q;
    cin >> n >> q;
    s.resize(n+1);
    p.resize(n+1);
    for (int i=1; i<=n; i++){
        p[i] = i;
    }
    while (q--){
        int type, x, y;
        cin >> type >> x >> y;
        if (type == 3){
            cout << (fp(x) == fp(y) ? "YES\n" : "NO\n");
        }
        else if (type == 1) Union(x, y);
        else{
            for (int i=min(x,y); i<=max(x,y); i++) Union(i, x);
        }
    }
}
