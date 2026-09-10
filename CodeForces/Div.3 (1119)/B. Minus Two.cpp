#include <bits/stdc++.h>

using namespace std;

void urunov() {
    int n;
    cin >> n;
    int a = 0;
    int b = 0;
    int c = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x % 2 != 0) a++;
        else if (x % 4 == 0) b++;
        else c++;
    }
    cout << max({a, b, c}) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) urunov();
}