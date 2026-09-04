#include <bits/stdc++.h>
using namespace std;

string makeMask(int n, int mask){
    string res = "";
    for (int i = 0; i < n; i++){
        if (mask & (1 << i)) res += '1';
        else res += '0';
    }
    return res;
}

pair<int, int> getSums(string &mask, vector<int> &v){
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < mask.size(); i++){
        if (mask[i] == '1') sum1 += v[i];
        else sum2 += v[i];
    }
    return {sum1, sum2};
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int &i : v) cin >> i;
    int ans = INT_MAX;
    for (int mask = 0; mask < (1 << n); mask++){
        string s = makeMask(n, mask);
        int l = getSums(s, v).first;
        int r = getSums(s, v).second;
        ans = min(ans, abs(l - r));
    }
    cout << ans;
    return 0;
}