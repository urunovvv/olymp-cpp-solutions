#include <bits/stdc++.h>
using namespace std;
#define str string
map<str,int> cnt(str s) {
    map<str,int> m;
    for (int i=0;i<s.size();) {
        str atom;
        atom += s[i++];
        while (i<s.size() && (islower(s[i])||isdigit(s[i]))) atom += s[i++];
        int j=atom.size()-1;
        while (j>=0 && isdigit(atom[j])) j--;
        str name = atom.substr(0,j+1);
        int num = stoi(atom.substr(j+1));
        m[name] += num;
    }
    return m;
}
map<str,int> mul(map<str,int> m, int k) {
    for (auto &p:m) p.second *= k;
    return m;
}
bool eq(map<str,int> a, map<str,int> b) {
    return a==b;
}

int main() {
    str a,b,c,d,p1,p2,e;
    cin >> a >> p1 >> b >> e >> c >> p2 >> d;
    for (int i=1;i<=10;i++)
    for (int j=1;j<=10;j++)
    for (int k=1;k<=10;k++)
    for (int o=1;o<=10;o++) {
        map<str,int> l = mul(cnt(a),i);
        map<str,int> l2 = mul(cnt(b),j);
        for (auto &p:l2) l[p.first]+=p.second;
        map<str,int> r = mul(cnt(c),k);
        map<str,int> r2 = mul(cnt(d),o);
        for (auto &p:r2) r[p.first]+=p.second;
        if (eq(l,r)) {
            if (i>1) cout<<i; cout<<a<<" + ";
            if (j>1) cout<<j; cout<<b<<" = ";
            if (k>1) cout<<k; cout<<c<<" + ";
            if (o>1) cout<<o; cout<<d<<'\n';
            return 0;
        }
    }
    return 0;
}
