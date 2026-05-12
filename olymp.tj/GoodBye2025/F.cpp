#include <bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
using namespace std;

int main(){
    string s;
    cin >> s;
    unordered_map<char, int>um;
    char last;
    for (int i=0; i<s.size(); i++){
        um[s[i]]++;
        if (um[s[i]]%2) last = s[i];
    }
    ll cnt=0;
    for (auto &p:um){
        if (p.ss % 2 and p.ff != last){
            p.ss++;
            cnt++;
        }
    }
    cout << cnt;
}
