#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    string s;
    cin >> n >> t >> s;
    s += '#';
    while (t--){
        for (int i = 0; i < n; i++){
            if (s[i] == 'B' and s[i+1] == 'G') swap(s[i], s[i+1]);
        }
    }
    s.resize(n);
    cout << s;
}