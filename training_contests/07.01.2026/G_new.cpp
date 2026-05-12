#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, x, y;
bool func (ll t, ll x, ll y){
    ll mn = min(x,y);
    ll res = t - mn;
    if (res/x + res/y + 1 >= n) return true;
    else return false;
}

int main()
{
    cin >> n >> x >> y;
    ll l=0, r = min(x,y)*n;
    while(l < r){
        ll mid = l + (r - l) / 2;
        if (func(mid, x, y)){
            r = mid;
        }
        else {
            l = mid + 1;
        }
    }
    cout << l;
}
