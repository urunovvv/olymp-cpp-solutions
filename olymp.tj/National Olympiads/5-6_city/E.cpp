#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin >> n;
    ll cnt = 0;
    while (n > 0){
        n/=2;
        cnt++;
    }
    cout << cnt;
}