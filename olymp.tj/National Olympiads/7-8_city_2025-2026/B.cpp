#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll a,b;
    cin >> a >> b;
    if (a == b){cout << "draw";}
    else{
    if (a > b){
        cout << "first";
    }
    else if(a < b){
        cout << "second";
    }}
    return 0;
}