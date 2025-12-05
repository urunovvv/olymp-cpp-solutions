#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s;
    string n;
    for (ll i=0; i<s.size(); i++){
        if (isdigit(s[i])){
            n += s[i];
        }
        else{
            if (n != ""){
                cout << n << ' ';
            }
            n = "";
        }
    }
    return 0;
}