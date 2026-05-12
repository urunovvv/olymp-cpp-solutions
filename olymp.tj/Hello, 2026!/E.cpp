#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    map<char, ll>holes= {
        {'A', 1}, {'B', 2}, {'D', 1}, {'O', 1}, {'P', 1}, {'Q', 1}, {'R', 1},
        {'a', 1}, {'b', 1}, {'d', 1}, {'o', 1}, {'p', 1}, {'q', 1}, {'g', 1}};
    string s;
    cin >> s;
    ll cnt=0;
    for (auto &c:s){
        cnt += holes[c];
    }
    cout << cnt;
}
