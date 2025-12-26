#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    size_t n = s.size();
    if (n==1 or islower(s[0]) or isupper(s[n-1])){
        cout << "No\n";
        return 0;
    }
    int i=0;
    while (i < n){
        if (isupper(s[i])){
            int cnt = 1;
            i++;
            while (i < n and islower(s[i++])) cnt++;
            if (cnt < 2 or cnt > 4){
                cout << "No\n";
                return 0;
            }
        }
        else i++;
    }
    cout << "Yes\n";
    return 0;
}
