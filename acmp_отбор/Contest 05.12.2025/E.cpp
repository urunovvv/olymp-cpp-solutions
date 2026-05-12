#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s = "GCV";
    int n;
    cin >> n;
    if (n % 3 == 0){cout << s;}
    else if (n % 3 == 1){cout << "VGC";}
    else cout << "CVG";
    return 0;
}
