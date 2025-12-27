#include <bits/stdc++.h>
using namespace std;
int main(){
    int g,c,l;
    cin >> g >> c >> l;
    int mx = max(g, max(c,l));
    int mn = min(g, min(c,l));
    int diff = mx - mn;
    int mid = (g+c+l) - mx - mn;
    if (diff >= 10) cout << "check again\n";
    else cout << "final " <<  mid;
    return 0;
}
