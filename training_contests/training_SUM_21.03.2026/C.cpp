#include <bits/stdc++.h>
using namespace std;

bool is_beautiful(const vector<int> &a) {
    unordered_map<int, int> freq;
    int sm = 0;
    for (int x : a) {
        sm += x;
        freq[x]++;
        if (freq[x] >= 2) return false;
    }
    if (a.size() - freq.size() > 1) return false;
    if (abs(sm) % a.size() != 0) return false;
    return true;
}

vector<int> get_arr(vector<int> &a, string mask) {
    vector<int> res;
    for (int i=0; i<a.size(); i++) {
        if (mask[i] == '1') res.push_back(a[i]);
    }
    return res;
}

string make_mask(int i, int len) {
    string mask = "";
    while (i > 0) {
        mask += (i % 2 == 1 ? '1' : '0');
        i /= 2;
    }
    while (mask.size() < len) mask = '0' + mask;
    reverse(mask.begin(), mask.end());
    return mask;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    if (is_beautiful(a)) {
        printf("%d", 0);
        return 0;
    }
    int mn = n;
    cout << make_mask(2, n) << endl;
    for (int i=1; i<=pow(2, n); i++) {
        string mask = make_mask(i, n);
        cout << "mask: " << mask << endl;
        vector<int> arr = get_arr(a, mask);
        if (is_beautiful(arr)) {
            mn = min(mn, n - (int)arr.size());
        }
    }
    if (mn == n) {
        printf("%d", n-1);
    } else {
        printf("%d", mn);
    }
}