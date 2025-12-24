#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int max_age = -1,ans = 0;
    for (int i=0; i<n; i++){
        int v,s;
        cin >> v >> s;
        if (s == 1){
            if (max_age < v){
                max_age = max(v, max_age);
                ans = i+1;
            }
        }
    }

    cout << ans << '\n';
    return 0;
}
