#include <bits/stdc++.h>
using namespace std;
int x, y, z, w;
int ans = 0;

void rec(int cur, int last_changed) 
{
    if (cur > w) return;
    if (cur == w){
        ans++;
    }
    if (last_changed <= 1){
        rec(cur + x, 1);
    }
    if (last_changed <= 2){
        rec(cur + y, 2);
    }
    if (last_changed <= 3){
        rec(cur + z, 3);
    }
}

int main(){
    cin >> x >> y >> z >> w;
    rec(0, 0);
    cout << ans;
}