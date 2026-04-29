#include <bits/stdc++.h>
using namespace std;

void urunov()
{
    int n; string s;
    cin >> n >> s;
    unordered_map<char, int>um;
    int mx = -1;
    for  (char &c:s)
        mx = max(mx, ++um[c]);
    cout << (mx > n - mx ? mx - (n - mx) : n%2) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        urunov();
}