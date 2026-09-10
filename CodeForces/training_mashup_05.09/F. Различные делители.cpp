#include <bits/stdc++.h>
using namespace std;
vector<int> primes;

bool prime(int n){
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

void urunov(){
    int d;
    cin >> d;
    long long a, b;
    for (long long i = 1 + d + (d % 2); !prime(i); i += 2) a = i;
    a -= 2;
    for (long long i = a + d + (d % 2); !prime(i); i += 2) b = i;
    b -= 2;
    cout << a << ' ' << b << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--) urunov();
}