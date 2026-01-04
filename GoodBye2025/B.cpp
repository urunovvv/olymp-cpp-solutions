#include <bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
#define ld long double
using namespace std;
/*ld dist(pair<ll, ll>d1, pair<ll, ll> d2){
    return sqrt(pow(d1.ff-d2.ff, 2)+pow(d2.ss-d1.ss, 2));
}*/

int main(){
    pair<ll, ll>me;
    cin >> me.ff >> me.ss;
    ll n;
    cin >> n;
    ll ans, cur_ans;
    for (int i=1; i<=n; i++){
        string s;
        ll dist;
        cin >> s >> dist;
        if (s == "right"){
            me.ff += dist;
        }
        else if (s == "left"){
            me.ff -= dist;
        }
        else if (s == "up"){
            me.ss += dist;
        }
        else{
            me.ss -= dist;
        }
    }
    cout << me.ff << ' ' << me.ss;
}
