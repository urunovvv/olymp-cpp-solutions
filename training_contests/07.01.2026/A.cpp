#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define eb emplace_back
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (char &c:s){
        if (c == '0'){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
