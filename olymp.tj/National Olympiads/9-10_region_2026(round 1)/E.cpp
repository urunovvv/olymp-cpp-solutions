#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string s;
    cin >> s;
    ll cnt = 0;
    for (char c:s){
        cnt += isdigit(c);
    }
    cout << cnt;
    return 0;
}
