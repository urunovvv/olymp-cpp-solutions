#include <iostream>

using namespace std;

int main()
{
    int n, res = 0;
    cin >> n;
    int a[n];
    for (int i=0; i<n;i++){cin >> a[i]; res += a[i]/2+(a[i]%2!=0);}
    cout << res;
    return 0;
}
