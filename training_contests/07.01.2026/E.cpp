#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define eb emplace_back
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll pos, neg, idx=1;
    vll ppos, negpos, z;
    for (int i=0; i<n; i++){
        ll cur;
        cin >> cur;
        if (cur > 0) {
            pos += cur;
            ppos.eb(idx++);
        }
        else if (cur < 0){
            neg += cur;
            negpos.eb(idx++);
        }
        else z.eb(idx++);
    }
    if (z.size() == n){
        cout << "1\n0";
        return 0;
    }
    if (abs(pos) > abs(neg)){
        cout << ppos.size() << '\n';
        for (auto &x : ppos) cout << x << ' ';
    }
    else{
        cout << negpos.size() << '\n';
        for (auto &x : negpos) cout << x << ' ';
    }
    return 0;
}
