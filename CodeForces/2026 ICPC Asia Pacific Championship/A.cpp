#include <bits/stdc++.h>
using namespace std;
map<pair<int, int>, bool> cache;

bool query(int i, int j) {
    if (i == j) return false;
    if (cache.count({i, j})) return cache[{i, j}];
    if (cache.count({j, i})) return !cache[{j, i}];

    cout << "query " << i << " " << j << endl;
    string res;
    cin >> res;
    return cache[{i, j}] = (res == "first");
}
int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) p[i] = i + 1;
    shuffle(p.begin(), p.end(), mt19937(1337));
    stable_sort(p.begin(), p.end(), query);
    cout << "answer";
    for (int x : p) cout << " " << x;
    cout << endl;
    return 0;
}
