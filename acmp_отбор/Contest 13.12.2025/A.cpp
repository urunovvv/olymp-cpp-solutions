#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if (n%4==0 and n%100!=0 or n%400==0){
        cout << "12/09/" << n << '\n';
    }
    else{
        cout << "13/09/" << n << '\n';
    }
    return 0;
}
