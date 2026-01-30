#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
vector<int> p, s;
vector<ll> exp, gp;
int n, m;
int find_parent(int x){
    if (x == p[x]) return x;
    int old_parent = p[x];
    p[x] = find_parent(p[x]);
    int px = find_parent(p[x]);
    exp[x] += exp[px];
    return p[x];
}

void add(int x, int v){
    int px = find_parent(x);
    exp[px] += v;
}

void join(int x, int y){
    int px = find_parent(x);
    int py = find_parent(y);
    if (px == py) return;
    if (s[px] < s[py]) swap(px, py);
    p[py] = px;
    exp[py] -= gp[px];
    s[px] += s[py];
}

ll get_exp(int x){
    find_parent(x);
    return exp[x];
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    p.resize(n+1);
    s.resize(n+1);
    gp.resize(n+1);
    exp.resize(n+1);
    for (int i = 1; i <= n; i++){
        p[i] = i;
        s[i] = 1;
        gp[i] = 0;
        exp[i] = 0;
    }
    for (int i = 0; i < m; i++){
        string q;
        int x, v, y;
        cin >> q >> x;
        if (q == "join") {
            cin >> y;
            join(x, y);
        }
        else if (q == "add"){
            cin >> v;
            add(x, v);
        }
        else if (q == "get"){
            cout << get_exp(x) << '\n';
        }
    }
    return 0;
}
