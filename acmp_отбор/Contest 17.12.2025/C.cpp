#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    size_t i=0, j=0;
    while(i<s.size() and j<t.size()){
        if (s[i] == t[j]){
            i++;
            j++;
        }
        else j++;
    }
    cout << (i==s.size() ? "YES" : "NO");
}
