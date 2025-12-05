#include <iostream>
#include <map>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    vector<string>v(t);
    for (ll k=0; k<t; k++){
        string s;
        cin >> s;
        map<char, ll>m;
        for (auto x:s){m[x]++;}
        ll nech = 0;
        for (auto &pair : m){
            if (pair.second % 2 != 0){nech++;}
        }
        v[k] = (nech == 1 or nech == 0 ? "YES" : "NO");
    }
    for (auto x : v){cout << x << "\n";}
    return 0;
}
