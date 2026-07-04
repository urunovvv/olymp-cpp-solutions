#include <bits/stdc++.h>
using namespace std;

bool check(string &s, string &t, int len){
    unordered_map<char, int> mp;
    for (char c : t) mp[c]++;
    unordered_map<char, int> m;
    for (int i = 0; i < len; i++) m[s[i]]++;
    if (m == mp) return true;
    for (int i = len; i < s.size(); i++){
        m[s[i]]++;
        m[s[i - len]]--;
        if (m[s[i - len]] == 0) m.erase(s[i - len]);
        if (m == mp) return true;
    }
    return false;
}

int main(){
    string s, t;
    cin >> s >> t;
    int l = t.size(), r = s.size();
    int ans_len = -1, ans_start = -1;
    while (l <= r){
        int mid = l + (r - l) / 2;
        if (check(s, t, mid)){
            ans_len = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    if (ans_len == -1){
        cout << "-1" << endl;
    }
    else{
        for (int i = 0; i <= s.size() - ans_len; i++){
            unordered_map<char, int> mp_t, mp_window;
            for (char c : t) mp_t[c]++;
            for (int j = i; j < i + ans_len; j++) mp_window[s[j]]++;
            if (mp_window == mp_t){
                cout << s.substr(i, ans_len) << endl;
                break;
            }
        }
    }
}