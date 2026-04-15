#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string s;
    ll D;
    cin >> s >> D;
    ll d = stoi(s.substr(0, 2));
    ll m = stoi(s.substr(3, 2));
    ll y = stoi(s.substr(6, 4));
    vector<ll> dim= {0,31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};
    d += D;
    while (d > dim[m]) {
        d -= dim[m];
        m++;
        if (m > 12) {
            m = 1;
            y++;
        }
    }
    if (d < 10) cout << 0;
    cout << d << ".";
    if (m < 10) cout << 0;
    cout << m << ".";
    cout << y;
}
