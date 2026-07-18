#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int m, l;
    cin >> s >> m >> l;
    vector<string>t(m);
    set<int>begs;
    for (string &i : t) cin >> i;
    unordered_map<string, int>mp;
    for (string &i : t) mp[i]++;
    for (int i = 0; i <= s.size() - m * l; i++){
        unordered_map<string, int>tmp;
        for (int j = 0; j < m; j++){
            string sub = s.substr(i + j * l, l);
            tmp[sub]++;
        }
        if (tmp == mp) begs.insert(i);
    }
    cout << begs.size() << endl;
    for (int i : begs) cout << i << ' ';
}