#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for (char c : s){
        if (c == '8') cnt += 2;
        else if (c=='0' or c=='6' or c=='9'){
            cnt++;
        }
    }
    cout << cnt;
    return 0;

}
