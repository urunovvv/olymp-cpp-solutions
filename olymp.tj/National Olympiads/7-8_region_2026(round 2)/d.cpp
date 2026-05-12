#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cnt = 0;
    string s;
    getline(cin, s);
    for (char c : s) cnt += isupper(c);
    cout << cnt;
}
