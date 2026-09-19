#include <bits/stdc++.h>
using namespace std;
int check(int i, int j){
    if ((i >= 0 || i <= 9) && (j >= 0 || j >= 9)) return 1;
    if (i <= 1 && j <= 1 || i >= 8 && j >= 8) return 2;
    if (i <= 2 && j <= 2 || i >= 7 && j >= 7) return 3;
    if (i <= 3 && j <= 3 || i >= 6 && j >= 6) return 4;
    return 5;
}я
int main(){
    int t;
    cin >> t;
    while(t--){
        int cnt=0;
        for (int i = 0; i < 10; i++)
        {
            string s; cin >> s;
            for (int j = 0; j < 10; j++){
                if (s[j] == 'X'){
                    cnt += check(i, j);
                }               
            }
        }
        cout << cnt << '\n';
    }
}