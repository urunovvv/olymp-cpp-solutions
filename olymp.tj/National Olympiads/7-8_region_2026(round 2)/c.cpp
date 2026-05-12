#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mn = 1e5;
    cin >> n;
    for (int i=0; i<n; i++){
        int num;
        cin >> num;
        if (num > 0){
            mn = min(mn, num);
        }
    }
    cout << (mn == (int)1e5 ? 0 : mn);
}
