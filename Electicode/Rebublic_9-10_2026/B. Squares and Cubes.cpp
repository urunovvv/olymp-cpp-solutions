#include <bits/stdc++.h>
using namespace std;
void urunov()
{
    int n;
    cin >> n;
    set<int> sq, cb;
    for (int i = 1; i * i <= n; i++)
        sq.insert(i * i);
    for (int i = 1; i * i * i <= n; i++)
        cb.insert(i * i * i);
    int ans = sq.size() + cb.size();
    for (auto i : sq)
        if (cb.count(i))
            ans--;
    cout << ans << '\n';
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