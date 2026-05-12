#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a=0,b=0;
    for (auto c:s){
        a+=(c=='A');
        b+=(c=='B');
    }
    cout << (a > b ? "Alice" : "Bob");
}
