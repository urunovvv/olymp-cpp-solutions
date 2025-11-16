#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#define pb push_back
#define ll long long
#define ff first
#define ss second
using namespace std;

int main()
{
    ll t;
    cin >> t;
    vector <string> res;
    for (ll k=0; k<t; k++){
        map<string, ll>m;
        ll n;
        cin >> n;
        string s;
        cin >> s;
        for (ll i=0; i<=s.size()-n; i++){
            string sub = s.substr(i, n);
            m[sub]++;
        }
        ll max_el = -1;
        for (auto &pair : m){
            if (pair.ss > max_el){max_el = pair.ss;}
        }
        for (auto &pair : m){
            if (pair.ss == max_el){res.pb(pair.ff); break;}
        }
    }
    for (auto x:res){
        cout << x << endl;
    }
    return 0;
    }
