#include <bits/stdc++.h>
using namespace std;

void urunov()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v){
        cin >> i;
        --i;
    }
    for (int j = 0; j < n; j++){
        int ans = 1;
        for (int i = v[j]; i != j; i = v[i]) ans++;
        cout << ans << ' ';
    }
    cout << '\n';
}

int main()
{
    int t; cin >> t;
    while (t--) urunov();
}