#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int k=0; k<t; k++){
        int n;
        cin >> n;
        vector<int>v(n);
        int a=-1, b = -1;
        for (auto &e:v) {
            cin >> e;
            if (e%2==1) a=e;
            else b=e;
        }
        if (a!=-1 and b!=-1) sort(v.begin(), v.end());
        for (auto &x : v){cout << x << ' ';}
        cout << '\n';
    }
    return 0;
}
