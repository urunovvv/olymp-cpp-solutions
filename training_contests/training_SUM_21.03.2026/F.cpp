#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin >> n;
    bool flag = 0;
    vector<int> c(n+1, 0), a = {1};
    for(int i = 1; i <= n; i++) {
        cin >> c[i];
        //cout << c[i] << ' ';
        if (c[i] == 1) flag = 1;
    }
    sort(c.begin(), c.end());
    if (!flag) {
        cout << "NO" << endl;
        return 0;
    }
    /*for (int i:c){
    }    cout << endl;*/
    for (int i=0; i<n and a.size() < n; i++){
        bool changed = false;
        int k = 1;
        cout << c[k] << ' ';
        for (int j=0; j<=n; j++){
            if (a[i] + c[j] == c[k]){
                a.push_back(c[k]);
                changed = true;
                k++;
                break;
            }
        }
        if (!changed){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}