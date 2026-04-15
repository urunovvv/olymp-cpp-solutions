#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    set<int>s;
    int n;
    cin >> n;int temp;
    for (int i=0; i<n; i++){
        cin >> temp;
        s.insert(temp);
    }
    cout << s.size();
}
