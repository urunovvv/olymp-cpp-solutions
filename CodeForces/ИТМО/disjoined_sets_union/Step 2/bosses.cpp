#include <bits/stdc++.h>
using namespace std;
vector<int>p, steps(3e5, 0);
int cnt = 0;
int fp(int x){
    if (x == p[x]) return x;
    int px = fp(p[x]);
    steps[x] += steps[p[x]];
    return p[x] = px;
}

void Union(int x, int y){
    int px = fp(x);
    int py = fp(y);
    if (px == py) return;
    p[px] = py;
    steps[px] = 1;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,q;
    cin >> n >> q;
    p.resize(n+1);
    for (int i=1; i<=n; i++){
        p[i] = i;
    }
    while (q--){
        cnt = 0;
        int type;
        cin >> type;
        if (type==1){
            int a,b; cin >> a >> b;
            Union(a,b);
        }
        else{
            int c;
            cin >> c;
            fp(c);
            cout << steps[c] << '\n';
        }
    }
}
