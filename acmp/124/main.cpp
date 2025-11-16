#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>>graph(n+1);
    for (int i=1; i<=m; i++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int i=1; i<n+1; i++){
        cout << graph[i].size() << ' ';
    }
    return 0;
}
