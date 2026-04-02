#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<bool>resheto(1e5+1, true);
    resheto[1] = false;
    resheto[0] = false;
    for (int i=2; i<(int)1e5+1; i++){
        if (!resheto[i]) continue;
        for (int j=i*2; j < (int)1e5+1; j+=i){
            resheto[j] = false;
        }
    }
    vector<int>pref(1e5 + 1, 0);
    for (int i=1; i<pref.size(); i++){
        pref[i] = pref[i-1] + resheto[i];
    }
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << pref[r] - pref[l-1] << '\n';
    }
}