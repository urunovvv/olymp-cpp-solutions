#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector <int> columns(n);
    for (int &i : columns) cin >> i;
    int l = 1, r = columns[n - 1] - columns[0], ans = 0;
    while (l <= r){
        int mid = (l + r) / 2;
        int last = columns[0], count = 1;
        for (int i = 1; i < n; i++){
            if (columns[i] - last >= mid){
                count++;
                last = columns[i];
            }
        }
        if (count >= k){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    cout << ans;    
}