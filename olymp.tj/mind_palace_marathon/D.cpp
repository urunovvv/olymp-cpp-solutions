#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    char sign;
    int a,b,c;
    cin >> a >> sign >> b >> sign >> c;
    cout << (a+b == c ? "YES" : "NO") << ' ' << a+b;
    return 0;
}