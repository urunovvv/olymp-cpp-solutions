#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    vector<vector<int>>dp(n+1, vector<int>(n+1, 0));
    for (auto &i:v) cin >> i;
    cout << v[n/2];
}
