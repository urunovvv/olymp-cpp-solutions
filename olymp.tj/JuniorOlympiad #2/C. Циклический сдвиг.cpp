#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    ll n,k;
    cin >> n;
    vector<int>v(n);
    for (int &i:v){
        cin >> i;
    }
    cin >> k;
    k %= n;
    for (int i=k; i<n+k; i++){
        cout << v[i%n] << ' ';
    }
}