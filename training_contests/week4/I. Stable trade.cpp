#include <bits/stdc++.h>
using namespace std;

bool check(multiset<int> &m, int k){
    return *m.rbegin() - *m.begin() <= k;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &x : v) cin >> x;
    multiset<int> window;
    
    int wbegin = 0, wend = 0, maxLen = 1;
    while (wbegin < n and maxLen <= n - wbegin){

    }
}