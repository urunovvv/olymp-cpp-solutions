#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, mx = -2e5;
        cin >> n;
        unordered_map<int, int>um;
        for (int i=0; i<n; i++){
            int num;
            cin >> num;
            um[num]++;
            mx = max(mx, um[num]);
        }
        int cnt = 0;
        for (auto p:um) cnt += (p.ss == mx);
        cout << (cnt == 1 ? "YES\n" : "NO\n");
    }
}
