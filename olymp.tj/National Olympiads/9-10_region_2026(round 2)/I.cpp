#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

vector<ll> split(string s){
    vector<ll>res;
    for (int i=0; i<s.size(); i++){
        ll n=0;
        if (s[i] == ' ') continue;
        while (isdigit(s[i])){
            n = n * 10 + (s[i]-'0');
            i++;
        }
        res.pb(n);
    }
    return res;
}

int main() {
    int n, m, h;
    vector<ll> l, p;
    scanf("%d %d %d\n", &n, &m, &h);
    string s, pp, u;
    //getline(cin, u);
    getline(cin, s);
    //getline(cin, u);
    getline(cin, pp);

    l = split(s);
    p = split(pp);
    sort(l.begin(), l.end(), greater<int>());
    sort(p.begin(), p.end(), greater<int>());
    long long ans = 0;
    int t = min(n, m);
    for (int i = 0; i < t; i++) {
        ans += min(l[i], p[i] * h);
    }
    cout << ans;
    return 0;
}
