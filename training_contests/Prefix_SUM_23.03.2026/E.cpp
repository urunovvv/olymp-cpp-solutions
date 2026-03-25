#include <bits/stdc++.h>
#define ll long long
using namespace std;

int get_value(vector<int> &a, int k){
    int n = a.size();
    unordered_map<ll, ll> mp;
    mp[0] = 1;
    ll sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        ans += mp[sum - k];
        mp[sum]++;
    }
    return ans;
}
vector<int> merge_and_get_pref(vector<vector<int>> &v, int beg, int fin){
    int n = v[0].size();
    vector <int>pref(n+1, 0), sum(n+1, 0);
    cout << "\n\n*********************************\n";
    for (int i=beg; i<=fin; i++){
        for (int j=0; j<n; j++){
            sum[j] += v[i][j];
            cout << sum[j] << ' ';
        }
        cout << '\n';
    }
    cout << "\n\n*********************************\n";
    for (int i=1; i<=n; i++){
        pref[i+1] = pref[i] + sum[i];
    }
    return pref;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // ifstream file("data.txt");
    int n,m,k;
    cin >> n >> m >> k;
    vector<vector<int>>pref(m + 1, vector<int>(n + 1, 0));
    vector<vector<int>>v(n+1, vector<int>(m+1));
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin >> v[i][j];
        }
    }
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            pref[j][i] = pref[j-1][i] + v[j][i];// + pref[][i];
        }
    }
    /*for (auto i:pref){
        cout << '\n';
        for (auto j:i){
            cout << j << ' ';
        }
    }*/
    int total = 0;
    for (int i=1; i<=n; i++){
        total += get_value(v[i], k);
    }
    for (int i=1; i<n; i++){
        for (int j=i+1; j<=n; j++){
            vector <int>cur_pref = merge_and_get_pref(pref, i, j);
            total += get_value(cur_pref, k);
        }
    }
    cout << total;
}
