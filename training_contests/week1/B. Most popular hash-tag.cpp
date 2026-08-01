#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, int> m;
    int mx = 0;
    int mx_n = 0;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        m[x]++;
        mx = max(mx, m[x]);

    }
    for (auto it: m){
        if (it.second == mx){
            mx_n = it.first;
            break;
        }
    }
    cout << mx_n << endl;
}