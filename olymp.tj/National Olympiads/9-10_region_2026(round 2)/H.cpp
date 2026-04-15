#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int>e(n,0);
        bool br = false;
        vector<vector<int>>graph(n+1, vector<vector<int>>(n+1, 0));
        for (int i = 1; i <= n; i++){
            while (cin >> j and j != 0){
                graph[i][j] = 1;
                graph[j][i] = 1;
                e[i]++;
                br += e[i]>2;
            }
        }
        if (br) cout << -1 << '\n';
    }

}
