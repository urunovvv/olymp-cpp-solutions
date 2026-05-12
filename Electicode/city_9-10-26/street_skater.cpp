#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int cnt = (v[0] <= v[1]) + (v[n-2] >= v[n-1]);
    for (int i=1; i<n-1; i++){
        cnt += (v[i] <= v[i-1] and v[i] <= v[i+1]);
    }
    cout << cnt;

    /// Решение за O(n*n)
    /*vector<int>v(n);
    vector<bool>f(n, false);
    for (auto &i:v) cin >> i;
    for (int i=0; i<n; i++){
        if (i + 1 < n and v[i+1] < v[i]){
            int j=i;
            while (j + 1 < n and v[j+1] < v[j]){
                j++;
            }
            f[j]=true;
        }
        else if (i - 1 >= 0 and v[i-1] < v[i]){
            int j=i;
            while (j - 1 >= 0 and v[j-1] < v[j]){
                j--;
            }
            f[j]=true;
        }
        else f[i]=true;
    }
    int cnt=0;
    for (auto x:f) cnt += x;
    cout << cnt;*/
}
