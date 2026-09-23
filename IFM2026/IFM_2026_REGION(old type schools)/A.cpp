#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int n, s;
	cin >> n >> s;
	vector<int> v(n);
	for (int &i : v) cin >> i;
	//multiset<int> m;
	deque <int> q;
	int mx = 0;
	int l = 0;
	int cur_sum = 0;
	for (int r = 0; r < n; r++){	
		cur_sum += v[r];
		q.push_back(v[r]);
		//m.insert(v[r]);
		while (!q.empty() && cur_sum > s)
		{
			q.pop_front();
			//m.erase(m.find(v[l]));
			cur_sum -= v[l++];
		}
		mx = max(mx, (int)q.size());
	}
	cout << mx << '\n';
}
