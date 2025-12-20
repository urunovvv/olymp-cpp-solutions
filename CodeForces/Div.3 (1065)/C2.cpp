#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, x=0;
        cin >> n;
        vector<int>a(n),b(n);
        for (auto &i:a) {cin >> i; x^=i;}
        for (auto &i:b) {cin >> i; x^=i;}
        if (!x){cout << "Tie\n"; continue;}
        string s="";
        while(x > 0){
            s+=to_string(x%2);
            x/=2;
        }
        reverse(s.begin(), s.end());
        size_t idx = s.find('1');
        cout << (!(idx%2) ? "Ajisai\n":"Mai\n");
    }
    return 0;
}
