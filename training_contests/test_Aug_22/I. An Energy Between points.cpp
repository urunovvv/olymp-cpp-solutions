#include <bits/stdc++.h>
using namespace std;
const long long SIZE = 200001;
vector<long long>pref(SIZE, 0);

void response(long long l, long long r){
    cout << pref[r - 1] - pref[l - 1] << '\n';
}

int main(){
    long long n, q;
    cin >> n >> q;
    for (long long i = 1; i <= n; i++){
        long long x; cin >> x;
        pref[i] = x + pref[i - 1];
    }
    while (q--){
        long long l, r;
        cin >> l >> r;
        response(l, r);
    }
}