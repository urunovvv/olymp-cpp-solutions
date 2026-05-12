#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    for (int i = n; i > 0; i--){
        string pref = s.substr(0, i);
        string rev_pref = pref;
        reverse(rev_pref.begin(), rev_pref.end());
        if (pref == rev_pref){
            cout << n - i << endl;
            return 0;
        }
    }
}