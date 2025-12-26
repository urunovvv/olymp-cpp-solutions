#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int mx = -1;
    for (auto &x : s){
        if (!isdigit(x) and !isupper(x)){
            cout << "No\n";
            return 0;
        }
        mx = max(mx, (int)x);
    }
    if (isdigit((char)mx)){
        cout << mx - '0'+1;
    }

    else cout << mx - 'A' + 11;
}
