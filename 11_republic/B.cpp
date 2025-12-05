#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    for (char &c : s1){c = tolower(c);}
    for (char &c : s2){c = tolower(c);}
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    cout << (s1 == s2 ? "YES" : "NO");
    return 0;
}