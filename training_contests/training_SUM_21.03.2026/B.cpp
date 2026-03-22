#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    unordered_map<ll, int> freq;
    freq.reserve(n * 2);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        freq[a[i]]++;   
    }
    int dupCnt = 0;
    ll dupValue = 0;
    for (auto &p : freq) {
        if (p.second >= 3) {
            cout << "NO";
            return 0;
        }
        if (p.second == 2) {
            dupCnt++;
            dupValue = p.first;
        }
    }
    if (dupCnt > 1) {
        cout << "NO";
        return 0;
    }

    if (n == 2) {
        cout << "YES";
        return 0;
    }

    int target = n;
    if (dupCnt == 1) {
        for (int i = 0; i < n; i++) {
            if (a[i] != dupValue) continue;
            ll remain = sum - a[i];
            if (remain % target == 0) {
                cout << "YES";
                return 0;
            }
        }
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        ll remain = sum - a[i];
        if (remain % target == 0) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
