#include <bits/stdc++.h>
using namespace std;

vector<int> pref(2e5+1, 0);

int s(int x){
    int sm = 0;
    while (x > 0){
        sm += x % 10;
        x /= 10;
    }
    return sm;
}

void fill(){
    for (int i = 1; i < pref.size(); i++){
        pref[i] = pref[i-1] + s(i);
    }
}

void urunov(){
    int n;
    cin >> n;
    printf("%d\n", pref[n]);
}

int main(){
    int t;
    cin >> t;
    fill();
    while (t--) urunov();
}
