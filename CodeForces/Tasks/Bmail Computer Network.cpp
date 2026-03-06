#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    v[0]=1;
    for (int i=1; i<n; i++){
        cin >> v[i];
    }
    vector<int>path;
    for (int i=n-1; i!=0; i=v[i]-1){
        path.push_back(i+1);
    }
    path.push_back(1);
    reverse(path.begin(), path.end());
    for (int i:path) cout << i << ' ';
}
