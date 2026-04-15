#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0;
    cin >> n;
    vector <int> v(n);
    for (int i=0; i<n; i++){cin >> v[i]; sum += v[i];}
    int i=0;
    while (true){
        if ((sum + i) % (n+1) == 0){cout << i; return 0;}
        else i++;
    }
    return 0;
}
