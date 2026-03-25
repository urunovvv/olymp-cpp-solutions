#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    size_t n = s.size();
    vector<vector<int>> pref(27, vector<int>(s.size() + 1, 0));
    for (int i = 0; i < s.size(); i++) {
        for (int j = 1; j <= 26; j++) {
            pref[j][i + 1] = pref[j][i];
        }
        pref[s[i] - 'a' + 1][i + 1]++;
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        int idx = 0;
        char mx = 'a';
        for (int i=0; i<27; i++){
            if (char('a' + i) > mx && pref[i][r] - pref[i][l - 1] >= pref[idx][r] - pref[idx][l - 1]){
                idx = i;
                mx = 'a' + i;
            }
        }
        cout << char(mx - 1) << "\n";
    }
}