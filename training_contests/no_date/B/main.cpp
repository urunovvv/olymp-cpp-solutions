#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    ll l = 0, r=count(s.begin(), s.end(), 'T'), res=0;
    for (char &c : s){
        if (c == 'X') res += l*r;
        else if (c == 'T'){
            l++;
            r--;
        }
    }
    cout << res;
    return 0;
}
