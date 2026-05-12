#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, k, ans;
    cin >> n >> k;
    vector<ll>v(n);
    for (auto &e : v){
        cin >> e;
    }
    while (k > 0){
        sort(v.begin(), v.end());
        v[0]++;
        k--;
    }
    sort(v.begin(), v.end());
    cout << v[0];
    return 0;
}
