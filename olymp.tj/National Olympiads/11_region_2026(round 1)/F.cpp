#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    int cnt=0;
    while (cin >> c){
        cnt += c-'0';
    }
    cout << cnt;
    return 0;
}