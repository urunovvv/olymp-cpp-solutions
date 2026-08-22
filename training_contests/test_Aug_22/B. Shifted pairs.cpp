#include <bits/stdc++.h>
using namespace std;
vector<int>a, b;
int L, R;
int findL(int x){
    int l = 0, r = b.size() - 1, ans = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(b[mid] - L >= x){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return ans;
}

int findR(int x){
    int l = 0, r = b.size() - 1, ans = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(b[mid] - R <= x){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n, m;
    cin >> n >> m >> L >> R;
    a.resize(n);
    b.resize(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(b.begin(), b.end());
    long long ans = 0;
    for(int i = 0; i < n; i++){
        int l = findL(a[i]);
        int r = findR(a[i]);
        // printf("a[i]: %d, l: %d, r: %d\n", a[i], l, r);
        ans += (r - l + 1) * (l != -1 && r != -1 && l <= r);
    }
    cout << ans << '\n';
}