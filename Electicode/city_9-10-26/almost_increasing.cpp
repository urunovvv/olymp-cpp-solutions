#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for (int &i:v) cin >> i;
    int cnt = 0;
    for (int i=1; i<n; i++){
        cnt += (v[i] <= v[i-1]);
    }
    cout << (cnt < 2 ? "YES\n" : "NO\n");
}
