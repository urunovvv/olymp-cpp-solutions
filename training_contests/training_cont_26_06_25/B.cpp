#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll dig_sum(ll n){
    ll cnt=0;
    while(n>0){
        cnt+=n%10;
        n/=10;
    }
    return cnt;
}

ll solve(ll n){
    ll cnt=0;
    while(n>0){
        n -= dig_sum(n);
        cnt++;
    }
    return cnt;
}

int main(){
    ll n;
    cin >> n;
    ll l=0, r=2e7;
    while(r - l > 1){
        ll mid = (l + r) / 2;
        if(solve(mid) >= n) r = mid;
        else l = mid;
    }
    cout << r;
    return 0;
}
