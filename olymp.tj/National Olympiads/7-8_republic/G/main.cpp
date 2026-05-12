#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    string s1 = s;
    sort(s1.begin(), s1.end());
    for (int i=0; i<n; i++){
        for (int j=1; j<n-i; j++){
            if ((int)s[j] < (int)s[j-1]) {swap(s[j-1], s[j]); cnt++;}
            if (s1 == s) break;
        }
    }
    cout << cnt;
    return 0;
}
