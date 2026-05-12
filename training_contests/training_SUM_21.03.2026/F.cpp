#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n, 0), b = {1};
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll sum = 1;
    for (int i=1; i<n; i++){
        if (sum < a[i]){
            cout << "NO\n";
            return 0;
        }
        sum += (ll)a[i];
    }
    cout << "YES";
    return 0;
}
