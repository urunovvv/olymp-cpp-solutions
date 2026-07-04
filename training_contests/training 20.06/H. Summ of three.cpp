#include <bits/stdc++.h>
using namespace std;

vector<int> triple_sort(int a, int b, int c){
    int sum = a + b + c;
    int mx = max(a, max(b, c));
    int mn = min(a, min(b, c));
    return {mn, sum-mx-mn, mx};
}

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for (int &i:v) cin >> i;
    set<vector<int>>s;
    for (int i=0; i<n-2; i++){
        for (int j=i+1; j<n-1; j++){
            for (int k=j+1; k<n; k++){
                if (i==j or j==k or i==k) continue;
                if (v[i] + v[j] + v[k] == 0) s.insert(triple_sort(v[i], v[j], v[k]));
            }
        }
    }
    cout << s.size() << '\n';
    for (auto i:s){
        for (int j:i){
            cout << j << ' ';
        }
        cout << '\n';
    }
}