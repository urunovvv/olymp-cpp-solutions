#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> num_vec(string &x){
    vector<int>res(x.size());
    for (int i=0; i<x.size(); i++){
        res[i] = x[i] - '0';
    }
    return res;
}

vector<int> add_nulls(vector<int>a, int sz){
    reverse(a.begin(), a.end());
    while (a.size() < sz) {
        a.push_back(0);
    }
    reverse(a.begin(), a.end());
    return a;
}

vector<int> add(string &x, string &y){
    int mx = max(x.size(), y.size())+1;
    vector<int>res(mx, 0);
    vector<int>a=num_vec(x), b=num_vec(y);
    int c=0, idx=0;
    b = add_nulls(b, mx);
    a = add_nulls(a, mx);
    for (int i=mx-1; i>=0; i--){
        int cur = a[i]+b[i]+c;
        res[i] = cur%10;
        c = cur / 10;
    }
    return res;
}

int main() {
    string n,m;
    cin >> n >> m;
    if (m=="0"){
        cout << "NO\n";
        return 0;
    }
    string b = "1";
    vector<int>res = add(n, b);
    for (int j=(res[0]==0); j<res.size(); j++){
        cout << res[j];
    }
    return 0;
}
