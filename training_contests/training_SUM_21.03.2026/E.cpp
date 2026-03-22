#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {  
    int n, q;  
    cin >> n >> q;  
    vector<int> a(n), pref(n + 1, 0), suff(n + 1, 0);  
    for (int i = 0; i < n; ++i) {    
        cin >> a[i];  
        pref[i + 1] = pref[i] + a[i];  
    }
    for (int i = n - 1; i >= 0; --i) {    
        suff[i] = suff[i + 1] + a[i];  
    }
    for (int i = 0; i < q; ++i) {    
        int l, r, k;    
        cin >> l >> r >> k;    
        ll sum = pref[r];
        sum += suff[l - 1];
        sum += k * (r - l + 1);
        if (sum % 2 != 0) {      
            cout << "YES\n";    
        } else {      
            cout << "NO\n";    
        }  
    }  
    return 0;
}