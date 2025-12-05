#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin >> n;
    ll floors = 0, i = 1;
    while (i < n){
        n-=i;
        floors++;
        i++;
    }
    cout << floors;
    return 0;
} 