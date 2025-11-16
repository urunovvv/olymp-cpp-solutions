#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n == 0) {cout << "\\_(O_O)_/"; return 0;}
    else if (n == 1) {cout << 1; return 0;}
    long long cnt = 2;
    for (long long i=2; i*i < n; i++){
        if (n%i == 0) cnt += 2;
    }
    cout << cnt + (pow((long long)(sqrt(n)), 2) == n);
    return 0;
}
