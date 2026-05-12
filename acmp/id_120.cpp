#include <bits/stdc++.h>
#define ll long long
#define rep(i;a;b) for (ll i=a; i<b; i++)
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin >> n >> m;
    vector<vector<ll>>v(n, vector<ll>(m, 0));
    for (auto &vec : v){
        for (auto &e : vec){
            cin >> e;
        }
    }
    rep(i;0;m){v[0][i] += v[0][i-1];}
    rep(i;0;n){v[i][0] += v[i-1][0];}
    rep(i;1;n){
        rep(j;1;m){
            v[i][j] += min(v[i-1][j], v[i][j-1]);
        }
    }
    cout << v[n-1][m-1] << '\n';
    return 0;
}
