#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<int> v(27, -1);
	for (int i = 0; i < n; i++) {
		int cur = (s[i] - 'a');
		if (v[cur] == -1) {
			v[cur] = (i % 2);
		}
		else {
			if (v[cur] != (i % 2)) {
                cout << "NO\n"; return;
            }
		}
	}
	cout << "YES\n";
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
    cin >> t;
    while (t--){
        solve();
    }
}