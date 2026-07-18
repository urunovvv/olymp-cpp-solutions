#include <bits/stdc++.h>
using namespace std;

void urunov(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mx = 0;
    for (int i=0; i<n; i++){
        int cur=0;
        while(s[i] == '#' and i < n){
            i++; cur++;
        }
        mx = max(cur, mx);
    } 
    printf("%d\n", mx/2+(mx%2));
}

int main(){
    int t;
    cin >> t;
    while (t--) urunov();
}