#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    size_t n = s.size();
    if (t.size() > s.length()){
        cout << -1;
        return 0;
    }
    int l = 0, r = 0;
    int mn = s.length() + 1;
    int cnt = 0, pos = 0;
    unordered_map<char, int> s_count, t_count;
    for (char c : t) t_count[c]++;
    int need = t_count.size();
    for (int r = 0; r < n; r++){
        s_count[s[r]]++;
        if (s_count[s[r]] == t_count[s[r]]) cnt++;
        while (l < r and cnt == need){
            if (r - l + 1 < mn){
                mn = r - l + 1;
                pos = l;
            }
            s_count[s[l]]--;
            if (s_count[s[l]] < t_count[s[l]]) cnt--;
            l++;
        }
    }
    cout << (pos == -1 ? "-1" : s.substr(pos, mn));
}