#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string n;
    cin >> n;
    string a,b;
    if (n.size()%2){
        a = s.substr(0, n.size()/2-1);
        b = s.substr(n.size()/2+1, n.size()/2);
    }
    else{
        a = s.substr(0, n.size()/2);
        b = s.substr(n.size()/2, n.size()/2);
    }
    ll s1=0, s2=0;
    for (int i=0; i<n.size()/2; i++){
        s1 += n[i] - '0';
        s2 += n[i+n.size()/2] - '0';
    }
    cout (s1==s2 ? "YES" : "NO");
    return 0;
}
