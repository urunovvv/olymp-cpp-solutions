#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i=0;
    long long a=0,b=0,c=0;
    while(isdigit(s[i])){
        a = a*10 + (s[i]-'0');
        i++;
    }
    i+=3;
    while(isdigit(s[i])){
        b = b*10 + (s[i]-'0');
        i++;
    }
    i+=3;
    while(isdigit(s[i])){
        c = c*10 + (s[i]-'0');
        i++;
    }
    cout << ((((a*a)+(b*b))==(c*c)) ? "YES" : "NO");
    return 0;
}
