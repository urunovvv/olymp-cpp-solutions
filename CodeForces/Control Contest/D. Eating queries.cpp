#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define ll long long

void urunov(){
    int n, q;
    cin >> n >> q;
    vector<int>a(n);
    for (int &i : a) cin >> i;
    sort(rall(a));
    vector<ll> pref(n+1, 0);
    for (int i = 0; i < n; i++)
        pref[i + 1] = pref[i] + a[i];

    while (q--){
        ll request;
        cin >> request;
        auto pos = lower_bound(all(pref), request);
        if (pos == pref.end()) cout << -1 << endl;
        else cout << pos - pref.begin() << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--) urunov();
}