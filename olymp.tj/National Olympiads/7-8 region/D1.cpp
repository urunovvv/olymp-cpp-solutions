#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;
    vector<ll>v;
    for (ll k=0; k<t; k++){
        ll n;
        cin >> n;
        ll i=1;
        while (true){
            if (sqrt(n+i) - (ll)(sqrt(n+i)) == 0){
                v.push_back(i);
                break;}
            i++;
        }
    }
    for (auto x:v){cout << x << "\n";}
    return 0;
}
