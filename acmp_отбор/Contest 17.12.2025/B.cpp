#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ld>v(n);
    ld cnt=0;
    for (auto &e:v){
        cin >> e;
    }
    cout << floor(v[n/2]);
    return 0;
}
