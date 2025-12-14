#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> happy, sad;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0) happy.pb(a[i]);
        else sad.pb(a[i]);
    }
    bool b = (a[0] > 0 ? true : false);
    int i = 0, j = 0;
    while (i < happy.size() && j < sad.size()) {
        if (b) {
            cout << happy[i++] << " ";
        } else {
            cout << sad[j++] << " ";
        }
        b = !b;
    }
    while (i < happy.size())
        cout << happy[i++] << " ";
    while (j < sad.size())
        cout << sad[j++] << " ";
    return 0;
}

