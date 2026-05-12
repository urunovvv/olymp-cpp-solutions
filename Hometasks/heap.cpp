#include <bits/stdc++.h>
#define ll long long
#define eb emplace_back
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>v, res;
    while(n--){
        int c, num;
        cin >> c;
        if (!c) {cin >> num; v.eb(num);}
        else{
            auto mx = max_element(begin(v), end(v));
            res.eb(*mx);
            v[] = 0;
        }
    }
    for (auto &x:res) cout << x << '\n';
}

