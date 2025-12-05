#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<string>s1(n);
    for (string &s:s1){
        cin >> s;
    }
    vector<string>s2(n);
    for (int i=0; i<n; i++){
        cin >> s2[i];
    }
    long long cnt = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (s1[i][j] == s2[i][j]) cnt++;
        }
    }
    cout << cnt;
}