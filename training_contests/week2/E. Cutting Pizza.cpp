#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
const ld eps = 1e-10;
const ld pi = 3.14159265358979323846;
ll k;
bool check(vector<ld> &areas, ld value){
    ll cnt = 0;
    for (auto x : areas){
        cnt += (ll)(x/value);
    }
    return cnt >= k;
}

int main(){
    ll n;
    cin >> n >> k;
    vector <ll> rads (n);
    vector<ld> areas;
    ld mx = -1e9;
    for (ll &x : rads) {
        cin >> x;
        areas.push_back(x * x * pi);
        mx = max(mx, x * x * pi);
    }
    sort(areas.rbegin(), areas.rend());
    ld l = 0, r = mx + 1;
    while (r - l > eps){
        ld mid = (l + r) / 2.0; // trying guess the area of a piece of pizza
        if (check(areas, mid)){ 
            l = mid;
        }
        else{
            r = mid;
        }
    }
    cout << fixed << setprecision(8) << l;
}