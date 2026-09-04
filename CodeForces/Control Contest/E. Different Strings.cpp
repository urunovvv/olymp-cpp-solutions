#include <bits/stdc++.h>
using namespace std;

void sol(){
    string s;
    cin >> s;
    set<char>ss;
    for (char c : s) ss.insert(c);
    next_permutation(s.begin(), s.end());
    if (ss.size() == 1) cout << "NO\n";
    else cout << "YES\n" << s;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        sol();
    }
}