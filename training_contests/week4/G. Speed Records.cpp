#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &x : v) cin >> x;
    multiset<int> window;
    for (int i = 0; i < k; i++) window.insert(v[i]);
    int wbegin = 0, wend = k - 1;
    while (wend < n){
        cout << *window.rbegin() << ' ';
        window.erase(window.find(v[wbegin++]));
        window.insert(v[++wend]);

    }
}