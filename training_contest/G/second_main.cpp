#include <iostream>
#include <vector>
#include <string>
#define  fir for (ll i=0; i<n; i++)
#define  fij for (ll j=0; j<n; j++)
#define ll long long
#define pb push_back
using namespace std;

int main(){
    string s;
    cin >> s;
    ll n=s.size(), br=-1, res=0;
    fir{if (s[i] == '(') br = i;}
    if (br == -1){
        vector <ll> nums;
    vector <char> op;
    op.pb('+');
    nums.pb(0);
    ll res = 0;
    for (ll i=0; i<s.size(); i++){
        ll cur = 0;
        while (s[i] >= '0' && s[i] <= '9'){
            cur += cur * 10 + (s[i] - '0');
            i++;
        }
        op.pb(s[i]);
        nums.pb(cur);
    }
    for (ll i=0; i<nums.size(); i++){
        if (op[i] == '+'){res += nums[i];}
        else{res *= nums[i];}
    }
    cout << res;
    return 0;
    }
    //
}
