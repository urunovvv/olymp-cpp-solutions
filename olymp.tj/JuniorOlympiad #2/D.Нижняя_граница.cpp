#include <bits/stdc++.h>
#define ll long long
#define all(x) ((x).begin(), (x).end())
using namespace std;

int my_upper_bound(vector<int>&v, int target){
    int l = 0, r = v.size();
    while (l < r){
        int mid = (l + r) / 2;
        if (v[mid] >= target){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    return l+1;
}

int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int>v(n+1, 0);
    for (int i=1; i<=n; i++){
        cin >> v[i];
    }
    int x;
    while (q--){
        cin >> x;
        if (x > v[n]){
            printf("%d\n", n+1);
            continue;
        }
        int loc = my_upper_bound(v, x);
        cout << loc << '\n';
    }
}