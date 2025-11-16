#include <iostream>
#include <vector>
#define pb push_back
#define len size()
#define ll long long
using namespace std;

int main()
{
    ll n, s;
    cin >> n;
    vector<ll>v(n);
    for (ll &e : v){cin >> e;}
    cin >> s;
    sort(v.begin(), v.end());
    for (ll i = 0; i < n; i++) {
        ll l = i + 1, r = n - 1;
        while (l < r) {
            ll sum = v[i] + v[l] + v[r];
            if (sum == s) {
                cout << "YES";
                return 0;
            }
            if (sum < s) l++;
            else r--;
        }
    }
    cout << "NO";
    return 0;
}
