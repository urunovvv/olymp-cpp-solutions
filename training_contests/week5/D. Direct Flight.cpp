#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    while (m--){
        int a, b;
        cin >> a >> b;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    int a, b;
    cin >> a >> b;
    for (int i:graph[a]){
        if (i == b){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}