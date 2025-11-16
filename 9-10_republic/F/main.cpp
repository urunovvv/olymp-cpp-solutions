#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt=0, idx=0;
    for (int i=s.size()-1; i>=0; i--){
        cnt += (s[i]-'0')*pow(2, idx++);
    }
    cout << cnt;
    return 0;
}
