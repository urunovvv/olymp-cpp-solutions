#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k=0;
    cin>>n;
    vector<vector<char>> v(n, vector<char>(n));
    for(auto &i:v){
        for (auto &j:i){
            cin >> j;
            if (j=='C') k++;
        }
    }
    k/=2;
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(k>0) cout<<1;
            else cout<<2;
            if(v[i][j]=='C') k--;
        }
        cout<<'\n';
    }
    return 0;
}
