#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    ll cnt;
    for (auto &c:s){
        cnt += c-'a'+1;
    }
    cout << cnt;
}
