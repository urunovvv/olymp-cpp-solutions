#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define pb push_back

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;    
    vector<pair<int, int>> items(n);
    for (int i = 0; i < n; i++) {
        cin >> items[i].ff >> items[i].ss;
    }
    vector<int> answer(k);
    double l = 0, r = 1e6;
    double eps = 1e-8;
    while (r - l > eps) {
        double mid = (l + r) / 2;
        
        vector<pair<double, int>> cur(n);
        for (int i = 0; i < n; i++) {
            cur[i] = {items[i].ff - mid * items[i].ss, i};
        }
        sort(cur.rbegin(), cur.rend());
        
        double sum = 0;
        for (int i = 0; i < k; i++) {
            sum += cur[i].ff;
        }
        
        if (sum >= 0) {
            l = mid;  
            for (int i = 0; i < k; i++) {
                answer[i] = cur[i].ss + 1;
            }
        } else {
            r = mid;
        }
    }

    sort(answer.begin(), answer.end());
    for (int i : answer) {
        cout << i << "\n";
    }
    
    return 0;
}