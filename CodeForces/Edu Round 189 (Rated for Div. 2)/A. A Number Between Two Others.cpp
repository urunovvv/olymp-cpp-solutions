#include <iostream>
#define ll long long
using namespace std;

void urunov(){
    ll x, y;
    cin >> x >> y;
    ll k = y / x;
    cout << (k > 2 ? "YES\n" : "NO\n");
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        urunov();
    }
    return 0;
}