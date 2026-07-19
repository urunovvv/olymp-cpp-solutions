/*A traveler walks along a mountain range consisting of n peaks with known a. They plan to divide the range into two sections: a left section (the first i peaks) and a right section (the remaining n-i peaks), where 1 <= i < n.

For a chosen division i, they find the maximum height of a peak in the left section and subtract the minimum height of a peak in the right section from it.

Find the maximum value of this difference among all possible division points i.

Input format
The first line contains an integer n (2 <= n <= 2 * 105) — the number of peaks.

The second line contains n integers ai (-109 <= ai <= 109) — the a of the peaks.

Output format
Output a single integer — the maximum difference between the maximum height of the left part and the minimum height of the right part.

Examples
Input
5
2 -1 3 5 4

Output
3*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> pref_max(n), suff_min(n);
    pref_max[0] = a[0];
    for (int i = 1; i < n; i++) {
        pref_max[i] = max(pref_max[i - 1], a[i]);
    }
    suff_min[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suff_min[i] = min(suff_min[i + 1], a[i]);
    }
    ll ans = LLONG_MIN;
    for (int i = 0; i < n - 1; i++) {
        ll diff = pref_max[i] - suff_min[i + 1];
        ans = max(ans, diff);
    }
    cout << ans << endl;

}