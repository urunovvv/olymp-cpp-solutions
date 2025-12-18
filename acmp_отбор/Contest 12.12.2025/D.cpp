#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    if (s.size() != t.size()){cout << "-1"; return 0;}
    if (s==t){cout << "0"; return 0;}
    int cnt=0;
    for (int i=0; i<s.size(); i++){
        t = t[t.size()-1]+t;
        t.pop_back();
        if (s==t) break;
        cnt++;
    }
    cout << (s==t ? cnt : -1);
}
