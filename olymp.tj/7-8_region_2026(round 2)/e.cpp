#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int best = 0;
    for (int i=1; i<s.size(); i++){
        int cnt = 1;
        while (i < s.size() and s[i] == s[i-1]){
            cnt++;
            i++;
        }
        best = max(best, cnt);
    }
    cout << best;
}
