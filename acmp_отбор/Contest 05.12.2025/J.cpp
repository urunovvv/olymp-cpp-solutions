#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            int cur;
            cin >> cur;
            if (j > i){
                cnt += cur;
            }
        }
    }
    cout << cnt;
    return 0;
}
