#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    unordered_map<char, int>rounds={
        {'0', 1},
        {'6', 1},
        {'8', 2},
        {'9', 1}
    }
    char c;
    int ans = 0;
    while(cin >> c) cnt += rounds[c].second;
    cout << ans
}