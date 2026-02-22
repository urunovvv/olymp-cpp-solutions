#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> graph(n, vector<int>(n));
    vector<int>colors(n);
    for (auto &i:graph){
        for (auto &j:i){
            cin >> j;
        }
    }
    int cnt = 0;
    for (auto &i:colors) cin >> i;
    for (int i=0; i<n; i++){
        for (int j=0; j<i; j++){
            if (graph[i][j]){
                cnt += (colors[i] != colors[j]);
            }
        }
    }
    cout << cnt;
}
