#include <bits/stdc++.h>
using namespace std;

int n, m, k;
vector<int> p(50001),sz(50001);
vector<pair<int,int>> edges(100000);
string type[150000];
vector<int> u_op(150000), v_op(150000);
vector<string> ans;

int find_parent(int x) {
    if(p[x] == x) return x;
    return p[x] = find_parent(p[x]);
}

void Union(int x, int y) {
    int px = find_parent(x);
    int py = find_parent(y);
    if(px == py) return;
    if(sz[px] < sz[py]) swap(px, py);
    p[py] = px;
    sz[px] += sz[py];
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> k;
    p.resize(n+1);
    sz.resize(n+1);
    for(int i=1; i<=n; i++) {
        p[i] = i;
        sz[i] = 1;
    }
    for(int i=0; i<m; i++) {
        cin >> edges[i].first >> edges[i].second;
    }

    for(int i=0; i<k; i++) {
        cin >> type[i] >> u_op[i] >> v_op[i];
    }

    for(int i=k-1; i>=0; i--) {
        if(type[i] == "ask") {
            if(find_parent(u_op[i]) == find_parent(v_op[i])) ans.push_back("YES");
            else ans.push_back("NO");
        } else if(type[i] == "cut") {
            Union(u_op[i], v_op[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    for(auto &s : ans) cout << s << '\n';
    return 0;
}
