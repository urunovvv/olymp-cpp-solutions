#include <iostream>
#include <vector>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;
    vector<bool> is_prime(r + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= r; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= r; j += i)
                is_prime[j] = false;
        }
    }
    int cnt = 0;
    for (int i = l; i <= r; i++)
        if (is_prime[i]) cnt++;
    cout << cnt;
    return 0;
}
