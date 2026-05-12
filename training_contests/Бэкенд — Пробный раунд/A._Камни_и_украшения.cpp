#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, j;
    cin >> j >> s;
    int result = 0;
    for (char c:s){
        if (j.find(c) != string::npos){
            result++;
        }
    }
    cout << result;
}