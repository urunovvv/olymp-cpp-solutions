#include <bits/stdc++.h>
using namespace std;

void urunov(){
    int n; cin >> n;
    map<int, int>mp;
    for (int i=0; i<n; i++){
        int k; cin >> k;
        mp[k]++;
    }
    int res;
    for (auto i:mp){
        res = i.second;
    }
    cout << res <<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        urunov();
    }
}
