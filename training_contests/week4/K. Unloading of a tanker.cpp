#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> prefMin(n+1, INT_MAX);
    for (int i = 0; i < n; i++){
        cin >> v[i];
        prefMin[i + 1] = min(prefMin[i], v[i]);
    }
    for (int i = n - 1; i >= 1; i--) cout << prefMin[i] << ' ';
}