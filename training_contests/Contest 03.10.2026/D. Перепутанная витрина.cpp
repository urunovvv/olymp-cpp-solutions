#include <bits/stdc++.h>
using namespace std;
#define print(n) for(auto &i : n) {cout << i << ' ';} cout << '\n';
#define int long long

void f(vector<int> &v){
    size_t n = v.size();
    int s = 0LL;
    vector<int> pos(n);
    for (int i = 0; i < n; i++){
        pos[v[i]] = i;
    }
    for (int i = 0; i < n; i++){
        if (pos[i] == i) continue;
        int j = pos[i];
        swap(v[i], v[j]);
        swap(pos[v[i]], pos[v[j]]);
        s++;
    }
    cout << s << '\n';
}

signed main()
{
    queue<int> q;
    // ifstream fin("test.txt");
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v) {cin >> i; --i; }
    // print(v);    
    f(v);
}