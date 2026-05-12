#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    int t;
    cin >> t;
    for(int k=0; k<t; k++){
        bool f = false;
        ll n;
        cin >> n;
        vector<ll>a(n),b(n);
        for (ll i=0; i<n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a.begin(), a.end());
        for (int i=0; i<n; i++){
            if (a[i]%2 != b[i]%2){
                cout << "NO\n";
                f = true;
                break;
            }
        }
        if (!f) cout << "YES\n";
    }
    return 0;
}
