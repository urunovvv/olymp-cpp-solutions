#include <bits/stdc++.h>

using namespace std;
///1 1 2 3 5 8 13
int main()
{
    vector <long long> f={1,1,2};
    long long n;
    cin >> n;
    for (int i=3; i<n; i++){
        f.push_back(f[i-1]+f[i-2]);
    }
    cout << f[n-1];
    return 0;
}
