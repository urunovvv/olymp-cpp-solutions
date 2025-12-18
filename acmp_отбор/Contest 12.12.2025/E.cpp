#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    if (s.size() == 2){
        cout << (s[0]==s[1] ? "NO" : "YES");
        return 0;
    }
    for (int i=1; i<s.size()-1; i++){
        if (s[i] == s[i-1] or s[i]==s[i+1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
