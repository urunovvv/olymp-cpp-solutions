#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        vector<int>v(n);
        for (&int i:v) cin >> i;
        auto it = max_element(v.begin(), v.end());
        if (it == v.begin()) it = v.begin()+1;
        swap()
    }
}
