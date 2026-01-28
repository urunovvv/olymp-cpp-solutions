```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solve() {
    int n;
    cin >> n;
    vector<int> h(n);
    map<int, int> counts;
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
        counts[h[i]]++;
    }

    int max_len = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < (1 << n); ++j) {
            vector<int> subset;
            for (int k = 0; k < n; ++k) {
                if ((j >> k) & 1) {
                    subset.push_back(h[k]);
                }
            }

            if (subset.empty()) continue;

            for (int k = 0; k < subset.size(); ++k) {
                vector<int> perm = subset;

                sort(perm.begin(), perm.end());
                do {

                    bool valid = true;
                    // Проверка на неубывание и невозрастание
                    bool peak_found = false;
                    for (int l = 0; l < perm.size() - 1; ++l) {
                        if (!peak_found) {
                            if (perm[l] > perm[l+1]) {
                                peak_found = true;
                            }
                        } else {
                            if (perm[l] < perm[l+1]) {
                                valid = false;
                                break;
                            }
                        }
                    }

                    if (!valid) continue;

                    // Проверка на рядом стоящие
                    for (int l = 0; l < perm.size() - 1; ++l) {
                        if (perm[l] == perm[l + 1]) {
                            valid = false;
                            break;
                        }
                    }

                    if (!valid) continue;

                    // Проверка на симметричность
                    for (int l = 0; l < perm.size() / 2; ++l) {
                        if (perm[l] != perm[perm.size() - 1 - l]) {
                            valid = false;
                            break;
                        }
                    }

                    if (valid) {
                        max_len = max(max_len, (int)perm.size());
                    }

                } while (next_permutation(perm.begin(), perm.end()));
            }
        }
    }

    return max_len;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}
```
