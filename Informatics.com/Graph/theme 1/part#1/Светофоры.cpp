#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;;
    vector<int>lights(n+1, 0);
    for (int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        lights[u]++;
        lights[v]++;
    }
    for (int i=1; i<=n; i++) cout << lights[i] << ' ';
}
