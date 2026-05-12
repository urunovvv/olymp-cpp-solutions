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
        string s,q;
        cin >> n >> s >> q;
        sort(s.begin(), s.end());
        sort(q.begin(), q.end());
        cout << (s==q ? "yes\n" : "no\n");
    }
    return 0;
}
