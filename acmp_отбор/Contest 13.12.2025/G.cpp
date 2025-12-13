#include <bits/stdc++.h>

using namespace std;

int main(){
    long long k,p;
    cin >> k >> p;
    vector<long long>v(k+1, 0);
    v[2] = 1;
    for (long long i=3; i<=k; i++){
        if (i%2==1) v[i]=v[i-1];
        else {v[i] = v[i-1] + v[i/2];}
        v[i] %= p;
    }
    cout << v[k] << '\n';
}
