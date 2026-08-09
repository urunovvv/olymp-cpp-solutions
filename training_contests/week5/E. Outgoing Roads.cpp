#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> out_pows(n + 1);
    while (m--){
        int a, b;
        cin >> a >> b;
        out_pows[a]++;
    }
    for (int i = 1; i <= n; i++) cout << out_pows[i] << ' ';
}