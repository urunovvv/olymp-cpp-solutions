#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    stack<int>crystals;
    for (int i=0; i<n; i++){
        char c;
        cin >> c;
        if (c=='P') {
            int cur;
            cin >> cur;
            crystals.push(cur);
        }
        else{
            if (crystals.empty()){cout << cnt; return 0;}
            cnt += crystals.top();
            crystals.pop();
        }
    }
    cout << cnt;
    return 0;
}
