#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char,int>m;
    for (auto &x:s){
        m[x]++;
    }
    for (auto &p:m){
        cout << p.first << p.second;
    }
    return 0;
}
