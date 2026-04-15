#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    ll res = 0;
    ll t = 0;
    ll k = count(s.begin(), s.end(), 'k');
    for (int i=0; i<s.size(); i++){
        if (s[i]=='t') t++;
        else if (s[i]=='j'){res += t*k;}
        else if (s[i] == 'k'){k--;}
    }
    cout << res;
    return 0;
}
