#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> k >> n;
    vector<long long> v(n+1, 0);
    v[0] = 1;
    if(n==1){cout << 1; return 0;}
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            if(i - j >= 0) {
                v[i] += v[i-j];
            }
        }
    }
    cout << v[n] << endl;
    return 0;
}
