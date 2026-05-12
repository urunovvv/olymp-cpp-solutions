#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt=0;
    for (char &c:s) cnt+=isupper(c);
    if (cnt==s.size() or (cnt==s.size()-1 and islower(s[0]))){
        for (auto &c:s){
            if (islower(c)) c = toupper(c);
            else c = tolower(c);
        }
    }
    cout << s;
}
