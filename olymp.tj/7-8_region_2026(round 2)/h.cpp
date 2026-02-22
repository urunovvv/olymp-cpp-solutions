#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v;
    int k = 0;
    int cur = 1;
    while (n >= cur) {
        v.push_back(cur);
        n -= cur;
        cur++;
        k++;
    }
    v[k-1] += n;
    cout << k << '\n';
    for (int i = k; i != 0; --i) {
        cout << v[i] << ' ';
    }
    return 0;
}
