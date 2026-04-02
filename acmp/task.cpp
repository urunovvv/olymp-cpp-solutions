#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    vector<int>prime(1e5+3, 0);
    for (int i=7; i<(int)1e5+3; i++){
        prime[i] = 0;
        for (int j=i; j*j<=(int)1e5; j++){
            prime[j*i]++;
        }
    }
    cout << n - prime[n];
}