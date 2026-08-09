#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> edgeCounts(n + 1, 0);
    while (m--){
        int a, b;
        cin >> a >> b;
        edgeCounts[a]++;
        edgeCounts[b]++;
    }
    for (int i = 1; i <= n; i++) cout << edgeCounts[i] << ' ';
}