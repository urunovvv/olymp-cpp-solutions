#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for (int &i : v) cin >> i;
	multiset<int>window;
	for (int i = 0; i < k; ++i) window.insert(v[i]);
	int wbegin = 0, wend = k - 1;
	cout << *window.rbegin() - *window.begin() << ' ';
	while (wend != n - 1){
		window.erase(window.find(v[wbegin++]));
		window.insert(v[++wend]);
		cout << *window.rbegin() - *window.begin() << ' ';
	}
}
