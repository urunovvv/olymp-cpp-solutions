#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll l[4], r[4];
    pair<ll, ll>otr={-1e9,1e9};
    for (int i=0; i<3; i++){
        cin >> l[i] >> r[i];
        otr.first = max(otr.first, l[i]);
        otr.second = min(otr.second, r[i]);
    }
    if (otr.second - otr.first >= 0){
        cout << otr.second - otr.first + 1;
    }
    else cout << 0;
    return 0;
}
