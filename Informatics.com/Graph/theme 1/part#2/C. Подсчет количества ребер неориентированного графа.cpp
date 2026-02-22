#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    int cnt = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> m;
            cnt += m*(j<i);
        }
    }
    cout << cnt;
}
