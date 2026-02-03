#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> p, s;
vector<ll> gp, experience;

int find_parent(int x){
    if (x == p[x]) return x;
    int px = p[x];
    p[x] = find_parent(p[x]);
    experience[x] += experience[px];
    return p[x];
}

void add(int x, int v){
    int px = find_parent(x);
    gp[px] += v;
}

void join(int x, int y){
    int px = find_parent(x);
    int py = find_parent(y);
    if (px == py) return;
    if (s[px] < s[py]) swap(px, py);

    experience[py] = gp[py] - gp[px];
    p[py] = px;
    s[px] += s[py];
}

ll get_exp(int x){
    find_parent(x);
    return gp[p[x]] + experience[x];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    p.resize(n+1);
    s.resize(n+1, 1);
    gp.resize(n+1, 0);
    experience.resize(n+1, 0);
    for(int i=1;i<=n;i++) p[i]=i;
    for(int i=0;i<m;i++){
        string q;
        int x, y, v;
        cin >> q >> x;
        if(q=="add"){
            cin >> v;
            add(x,v);
        } else if(q=="join"){
            cin >> y;
            join(x,y);
        } else if(q=="get"){
            cout << get_exp(x) << '\n';
        }
    }
}
