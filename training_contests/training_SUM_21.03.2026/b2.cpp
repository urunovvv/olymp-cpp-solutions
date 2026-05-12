#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    long long sum = accumulate(a.begin(), a.end(), 0LL);
    if (unique(a.begin(), a.end()) - a.begin() != n) {
        cout << "YES" << endl;
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        long long new_sum = sum - a[i];
        if (new_sum % n == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}