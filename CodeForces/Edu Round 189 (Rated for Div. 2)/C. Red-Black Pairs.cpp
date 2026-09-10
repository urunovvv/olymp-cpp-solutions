#include <iostream>
using namespace std;

void urunov(){
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 0; i < n; ) {
        if (a[i] == b[i]) {
            i++;
        } else {
            if (i + 1 < n && a[i] == a[i + 1] && b[i] == b[i + 1]) {
                i += 2;
            } else {
                ans++;
                i++;
            }
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        urunov();
    }
    return 0;
}