#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &i : v) cin >> i;
        sort(v.begin(), v.end());
        int x = v[0] * v[n - 1], id = 0;
        for (int i = 2; i <= 1e6; i++){
            if (id >= n) break;
            if (x % i == 0){
                if (v[id] == i){
                    id++;
                }else{
                    x = -1;
                    break;
                }
            }
        }
        cout << x << '\n';
    }
}
