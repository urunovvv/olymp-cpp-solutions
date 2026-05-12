#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long mx = -1;
    while (n){
        mx = max(mx, n%10);
        n/=10;
    }
    cout << mx;
}
