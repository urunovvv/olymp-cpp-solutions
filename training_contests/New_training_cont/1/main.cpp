#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, res;
    cin >> s;
    long long num = 0;
    for (char c : s){
        num = num*10 + (c-'0');
    }
    while (num > 0){
        res += char ('0'+(num % 2));
        num /= 2;
    }
    reverse(res.begin(), res.end());
    cout << res;
    return 0;
}
