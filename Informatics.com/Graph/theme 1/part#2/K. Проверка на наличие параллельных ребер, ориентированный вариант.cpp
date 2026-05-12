#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    map<pair<int, int>, int>mp;
    bool f = false;
    while (m--){
        pair <int, int>p;
        int &a = p.ff, &b = p.ss;
        cin >> a >> b;
        mp[p]++;
        if (mp[p] > 1) f = true;
    }
    cout << (f ? "YES\n" : "NO\n");
}
