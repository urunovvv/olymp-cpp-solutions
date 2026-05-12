#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<vector<int>>graph(n, vector<int>(n, 0));
    for (auto &v : graph){
        for (auto &e : v){
            cin >> e;
        }
    }
    vector<int>colors(n);
    for (auto &e:colors){
        cin >> e;
    }
    ll cnt=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (graph[i][j] == 1 and colors[i] != colors[j]) cnt++;
        }
    }
    cout << cnt/2 << '\n';
    return 0;
}
