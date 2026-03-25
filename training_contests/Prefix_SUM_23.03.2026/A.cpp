#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> a(n), pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
    }
    while (q--) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
            cout << pref[r] - pref[l - 1] << "\n";
        else{
            if (pref[r] - pref[l - 1] != r-l+1){
                cout << "0\n";
            }
            else{
                cout << "1\n";
            }
        }    
    }
}
