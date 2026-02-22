#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool b=false;
        for (int i=0; i<n; i++){
            int num;
            cin >> num;
            if (num == 67) b = true;
        }
        cout << (b ? "YES\n" : "NO\n");
    }
}
