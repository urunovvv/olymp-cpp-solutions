#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s;
    map<char, int>m;
    cin >> s;
    for (char &c : s){
        m[c]++;
    }//
    
    cout << m.size() << '\n';
    for (auto &p : m){
        cout << p.first << " - " << p.second << '\n';
    }
    return 0;
}