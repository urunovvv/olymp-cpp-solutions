#include <bits/stdc++.h>
using namespace std;

void urunov(){
    int n;
    cin >> n;
    vector<int>v(n);
    for (int &i:v){
        cin >> i;
    }
    vector<int>b = v;
    sort(begin(b), end(b));
    if (v==b){
        cout << n << '\n';
        return;
    }
    cout << 1 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        urunov();
    }
}
