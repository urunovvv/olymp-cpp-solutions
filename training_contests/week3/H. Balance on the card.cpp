#include <bits/stdc++.h>
using namespace std;
#define ll long long 

vector<vector<ll>> pref(500, vector<ll>(500, 0));

ll zeroesInLine(vector<ll> &a){ 
    int n = a.size();
    unordered_map<ll, ll>  cnt;
    cnt[0] = 1;
    ll sum = 0, ans = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
        if (cnt[sum] != 0) ans += cnt[sum];
        cnt[sum]++;
    }
    return ans;
}

vector<ll> mergeRows(int top, int bottom){  
    vector<ll> a(pref[0].size());
    for (int i = 0; i < a.size(); i++){
        a[i] = pref[bottom][i] - pref[top-1][i];
    }
    return a;
}

ll solve(vector<vector<ll>> &v){
    ll ans = 0LL;
    int n = v.size();
    int m = v[0].size();
    vector<ll> row;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            row = mergeRows(i, j);
            ans += zeroesInLine(row);
        }
    }
    return ans;
}

int main(){
    ll n, m;    
    cin >> n >> m;
    vector<vector<ll>> v(n+1, vector<ll>(m+1, 0));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> v[i][j];
            pref[i][j] = v[i][j] + (pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1]);
        }
    }
    cout << solve(v);
}