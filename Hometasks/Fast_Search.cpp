#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    vector<ll>v(n);
    for  (auto &i:v) cin >> i;
    sort(begin(v), end(v));
    int q;
    cin >> q;
    while (q--){
        int a, b;
        cin >> a >> b;
        auto l = lower_bound(begin(v), end(v), a);
        auto r = upper_bound(begin(v), end(v), b);
        cout << distance(l,r) << ' ';
    }
}
