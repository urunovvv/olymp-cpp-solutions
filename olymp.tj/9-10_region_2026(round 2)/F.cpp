#include <bits/stdc++.h>
using namespace std;

void firuz()
{
    int n,x,y;
    cin >> n >> x >> y;
    vector<int>v(x);
    for (auto &i:v) cin >> i;
    sort(begin(v), end(v));
    int cnt = 0;
    for (int i=1;i<n;i++){
        if (v[i] - v[i-1] == 2) cnt++;
    }
    cnt += v[x-1] - v[0] == 2;
    cnt += x-2;
    cout << cnt << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--){
        firuz();
    }
    return 0;
}
