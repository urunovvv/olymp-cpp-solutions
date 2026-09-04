#include <bits/stdc++.h>
using namespace std;


int main()
{
    int x;
    cin >> x;
    int ans = 0;
    for (int a = 1; a <= x - a * 3; a++){
        for (int b = a; b <= x - 2 * b - a; b++){
            for (int c = b; c <= x - a - b - c; c++){
                ans++;
            }
        }
    }
    cout << ans;
}