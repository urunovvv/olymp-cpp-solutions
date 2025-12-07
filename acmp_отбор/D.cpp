#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s = "qwertyuiopasdfghjklzxcvbnmq";
    char c;
    cin >> c;
    int loc = s.find(c);
    cout << s[loc+1];
    return 0;
}
