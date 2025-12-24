#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>>v(n);
    for (int i=0; i<n; i++){
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    vector<int>res(n);
    int cnt = 1;
    res[v[0].second] = cnt;
    for (int i=1; i<n; i++){
        if(v[i].first - v[i-1].first > d){
            res[v[i].second] = cnt;
        }
        else{
            if (cnt>1) res[v[i].second] = --cnt;
            else res[v[i].second] = cnt++;
        }
    }
    for (auto x:res){cout << x << ' ';}
    return 0;
}
