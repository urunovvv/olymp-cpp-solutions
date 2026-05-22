#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, x, y;
    cin >> n >> x >> y;
    ll l = 0;
    // time if we'll copy the doc n times by faster xerox
    ll r = min(x, y) * n; 

    while (l < r){
        int mid = (l + r) / 2;
        ll cps = 0; 
        if (mid >= min(x, y)){
            // time spent on copying the doc by two xerox machines after
            // getting the first copy from the faster xerox machine
            ll t = mid - min(x, y);
            // 1 source list + time spent on copying the doc by two xerox machines
            cps = 1 + t/x + t/y;
        }
        // moving pointers
        if (cps >= n)
            r = mid;
        else
            l = mid + 1;
    }
    // printing the minimum time required to copy the doc n times
    cout << l;
}