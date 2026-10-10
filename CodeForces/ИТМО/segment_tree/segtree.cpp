#include <bits/stdc++.h>
using namespace std;
#define int long long


struct segtree{
    vector<int> tree;
    int size;
    void segtree(int n){
        size = 1;
        while (size < n) size *= 2;
        tree.assign(2 * size - 1, 0);
    }

    void set(int i, int v, int x, int lx, int rx){
        if (rx - lx == 1){
            tree[x] = v;
            return;
        }
        int m = (lx + rx) / 2;
        if (i < m){
            set(i, v, 2 * x + 1, lx, m);
        } else {
            set(i, v, 2 * x + 2, m, rx);
        }
        tree[x] = tree[2 * x + 1] + tree[2 * x + 2];
    }

    void set(int i, int v){
        set(i, v, 0, 0, size);
    }

    int sum(int l, int r, int x, int lx, int rx){
        if (lx >= r || l >= rx) return 0;
        if (lx >= l && rx <= r) return tree[x];
        int m = (lx + rx) / 2;
        int s1 = sum(l, r, 2 * x + 1, lx, m);
        int s2 = sum(l, r, 2 * x + 2, m, rx);
        return s1 + s2;
    }

    int sum (int l, int r){
        return sum(l, r, 0, 0, size);
    }

};

void urunov(){
    int n, m;
    cin >> n >> m;
    segtree s(n);3
}

signed main(){
    int t = 1;
    cin >> t;
    while (t--) urunov();
}