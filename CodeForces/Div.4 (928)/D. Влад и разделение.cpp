#include <bits/stdc++.h>
using namespace std;

const int X = 2147483647; 

void urunov() {
    int n;
    cin >> n;
    vector<int>a(n);
    for (int &i : a) cin >> i;
    map<int, int> m;
    int ans = 0;
    for (int i = 0; i < n; i++){
        if (m[X - a[i]] != 0){
            m[X - a[i]]--;
            m[a[i]]--;
        }else{
            ans++;
        }
        m[a[i]]++;

    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) urunov();
    return 0;
}