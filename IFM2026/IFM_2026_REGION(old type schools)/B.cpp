#include <bits/stdc++.h>
using namespace std;

void urunov()
{
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for (int &i : v) cin >> i;
	if (n == 1){
		cout << "0\n";
		return;
	}
	sort(begin(v), end(v));
	int mx = 0;
	vector<int> tmp;
	int sz = 1;
	for (int i = 1; i < n; i++){
		if (v[i] - v[i-1] > k){
			sz = 0;
		}
		sz++;
		mx = max(mx, sz);
	}
	cout << n - mx << '\n';
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) urunov();
}
