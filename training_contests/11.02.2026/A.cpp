#include <btis/stdc++.h>
#define ll long long
using namespace std;

map<int, ll> m;

ll func(int n) {
    if (n < 3) return 0;
    if (n == 3) return 1;
    if (m.count(n)) {
        return m[n];
    }
    ll result = func((n + 1) / 2) + func(n / 2);
    return m[n] = result;
}

int main() {
    int n;
    cin >> n;
    cout << func(n);
    return 0;
}
