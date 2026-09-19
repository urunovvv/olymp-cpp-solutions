#include <bits/stdc++.h>
using namespace std;

void urunov()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int a_even = 0, a_odd = 0, b_even = 0, b_odd = 0; 
    for (int i = 0; i < a.size(); i++){
        a_even += (a[i] - '0') * (i % 2 == 0);
        a_odd += (a[i] - '0') * (i % 2 == 1);
        b_even += (b[i] - '0') * (i % 2 == 0);
        b_odd += (b[i] - '0') * (i % 2 == 1);
    }
    cout << (a_even == b_even && a_odd == b_odd ? "YES\n" : "NO\n");
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        urunov();
    }
}