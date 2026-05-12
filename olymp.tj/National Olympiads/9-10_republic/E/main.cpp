#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n, p;
    cin >> n >> p;
    vector <ll> v(n);
    map<ll, int>m;
    for (ll &i : v){
        cin >> i;
        m[i]++;
    }
    p /= 2;
    for (ll i=0; i<n; i++){
        if (m[v[i]]>=2 and m[p-v[i]]>=2
            or m[p-v[i]] == m[v[i]] and m[v[i]]>=4){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
