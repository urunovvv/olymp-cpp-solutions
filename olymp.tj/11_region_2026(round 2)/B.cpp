#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int ans = 0;
    string s;
    cin >> s;
    for (char c:s){
        int r;
        if (c=='0' or c=='6' or c=='9') r=1;
        else if (c=='8') r = 2;
        else r = 0;
        ans += r;
    }
    cout << ans;
}