#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, s;
    cin >> n >> s;
    vector<int>v(n);
    for (int &i : v) cin >> i;
    sort(v.begin(), v.end());
    int i=0, j=n-1;
    while (i<j){
        if (v[i]+v[j]==s){
            cout << "YES" << endl;
            return 0;
        }
        else if (v[i]+v[j]<s) i++;
        else j--;
    }
    cout << "NO" << endl;
}