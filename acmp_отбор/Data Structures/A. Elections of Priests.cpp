#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v) cin >> i;
    map<int, int> m;
    int z;
    cin >> z;
    while (z--){
        int a, b;
        cin >> a >> b;
        m[a] = b;
    }
    for (int &i : v){
        i = (m.contains(i) ? m[i] : i);
        cout << i << ' ';
    }
}