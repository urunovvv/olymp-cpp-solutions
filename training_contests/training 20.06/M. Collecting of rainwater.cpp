#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v) cin >> i;
    stack<int> s;
    int i = 0;
    int ans = 0;
    while (i < n - 1){
        int j = i+1;
        while (j < n and v[i] > v[j]){
            ans += v[i] - v[j++];
        }
        i = j;
    }
    cout << ans;
}