#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int &i : v) cin >> i;
    while (q--){
        int x;
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);
        if (it == v.begin()) cout << *it << '\n';
        else if (it == v.end()) cout << *(it - 1) << '\n';
        else{
            int a = *it, b = *(it - 1);
            if (abs(a - x) < abs(b - x)) cout << a << '\n';
            else cout << b << '\n';
        }
    }
}