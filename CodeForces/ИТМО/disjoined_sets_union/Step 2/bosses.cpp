#include <bits/stdc++.h>
using namespace std;
vector<int>p;
int cnt = 0;
int fp(int x){
    if (x == p[x]) return x;
    while (x != p[x]) {x = p[x]; cnt++;}
    return p[x];
}

void Union(int x, int y){
    int px = fp(x);
    int py = fp(y);
    if (px == py) return;
    p[px] = py;
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
            cout << cnt << '\n';
        }
    }
}
