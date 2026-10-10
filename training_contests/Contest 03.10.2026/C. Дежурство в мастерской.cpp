#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define int long long
signed main(){
    int n;
    cin >> n;
    vector<vector<int>> cost(n, vector<int>(4));
    for (auto &j : cost){
        for (int &i : j) cin >> i;
    }
    if (n < 3){
        int mn1=LLONG_MAX, mn2 = LLONG_MAX;
        int m1i = -1, m2i = -1;
        for (int i = 0; i < 4; i++){
            if (cost[0][i] < mn1){
                mn1 = cost[0][i];
                m1i = i;
            }
        }
        if (n == 2){
            for (int i = 0; i < 4; i++){
                if (cost[1][i] < mn2){
                    mn2 = cost[1][i];
                    m2i = i;
                }
            }
            if (m1i != m2i){
                cout << mn1 + mn2;
                return 0;
            }else{
                int mn3 = LLONG_MAX;
                for (int i = 0; i < 4; i++){
                    if (i == m1i) continue;
                    mn3 = min(mn3, cost[1][i]);
                }
                cout << mn1 + mn3;
                return 0;
            }
        }
    }
    map<pair<int, int>, int> old_dp; // ключ (позавчера, вчера),   значение = цена
    for (int i = 1; i < 5; i++){
        for (int j = 1; j < 5; j++){
            if (i == j) continue;
            old_dp[{i, j}] = cost[0][i] + cost[1][j];
        }
    }
    map<pair<int, int>, int> new_dp;
    for (int k = 1; k <= n - 2; k++){
        for (auto &p : old_dp){
            int a = p.ff, b = p.ss;
            for (int i = 1; i <= 4; i++){
                if (i == a || i == b) continue;
                new_dp[{b, i}] = min(new_dp[{b, i}], old_dp[{a, b}] + cost[k-1][i]);
            }
        }
    }
    cout 
}
