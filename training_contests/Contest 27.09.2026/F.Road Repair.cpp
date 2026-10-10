#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()

vector<int> p, s;
set<int> pp;

int get(int x){
    if (p[x] == x) return p[x];
    return p[x] = get(p[x]);
}

void Union(road r){
    int a = r.u, b = r.v;
    a = get(a);
    b = get(a);
    if (a == b) return;
    if (s[a] < s[b]) swap(a, b);
    if (pp.find(b) != p.end()) pp.erase(pp.find(b));
    sz[a] += sz[b];
    p[b] = a;
}

int getPair(int n) { return n * (n - 1) / 2; } // sz equals to s[get(x)]


struct road{
    int u, v;
};

int main(){
    int n, m;
    cin >> n >> m;
    s.resize(n+1, 1);
    p.resize(n+1);
    iota(all(p), 0);
    vector<road>roads(m);
    for (auto &i : roads) cin >> i.u >> i.v;
    vector<int> cl(m);
    for (int &i : cl) cin >> i;
    vector<int> ans = {0};
    reverse(all(cl));
    for (int i : cl){
        i--;
        Union(roads[i]);
        pp.insert(p[roads[i].u]);
        int cur = 0;
        for (int x : pp){
            cur += getPair(x);
        }
        ans.push_back(cur);
    }
    reverse(all(ans));
    for (int i : ans) cout << i << '\n';
}
