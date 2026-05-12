#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second

void urunov(){
    string s;
    cin >> s;
    unordered_map<char, int>um;
    int mx=-1;
    for (char c : s){
        um[c]++;
        mx = max(um[c], mx);
    }
    vector<int>v;
    for (auto p : um){
        if (p.ss == mx){
            v.push_back((int)p.ff);
        }
    }
    sort(v.begin(), v.end());
    cout << (char)v[0] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--){
        urunov();
    }
}