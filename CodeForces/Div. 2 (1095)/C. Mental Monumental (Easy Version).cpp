#include <bits/stdc++.h>
using namespace std;

void urunov(){
    int n;
    cin >> n;
    vector<int>frz(n);
    for (int &x:frz){
        cin >> x;
    }
    sort(a.begin(), a.end());
    int mex = 0;
    for (int x : a){
        if (x >= 2 * mex + 1){
            mex++;
        }
    }
    printf("%d\n", mex);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) urunov();
}