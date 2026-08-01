#include <bits/stdc++.h>
using namespace std;

vector<int> zip(vector<string> &v){
    vector<int> res;
    int n = v.size(), m = v[0].size();
    for (int i = 0; i < m; i++){
        int cur = 0;
        for (int j = n - 1; j >= 0 and v[j][i] != '.'; j--){
            cur++;
        } 
        res.push_back(cur);
    }
    return res;
}


int main(){
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (string &s : v) cin >> s;
    vector<int> heights = zip(v);
    int ascent = 0, descent = 0;
    for (int i = 1; i < m; i++){
        ascent = max(ascent, heights[i] - heights[i - 1]);
        descent = max(descent, heights[i - 1] - heights[i]);
    }
    cout << ascent << ' ' << descent << '\n';
}