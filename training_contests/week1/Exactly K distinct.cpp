#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i:v) cin >> i;
    set<vector<int>> s;
    sort(v.begin(), v.end());
    for (int i=0; i<n-2; i++){
        if (i>0 and v[i]==v[i-1]) continue;
        int j=i+1, k=n-1;
        while (j<k){
            int sum = v[i] + v[j] + v[k];
            if (sum==0){
                s.insert({v[i], v[j], v[k]});
                j++;
                k--;
                while (j<k and v[j]==v[j-1]) j++;
                while (j<k and v[k]==v[k+1]) k--;
            }
            else if (sum<0) j++; 
            else k--;
        }
    }
    cout << s.size() << endl;
    for (auto i : s) {
        for (int x : i) {
            cout << x << " ";
        }
        cout << endl;
    }
}