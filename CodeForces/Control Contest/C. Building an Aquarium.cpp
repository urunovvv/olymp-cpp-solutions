#include <bits/stdc++.h>
#define ll long long 
using namespace std;
const ll zero = 0; 
ll cur_volume(vector<ll> &v, ll h){
	ll n = v.size();
	ll res = 0;
	for (ll i = 0; i < n; i++){
		res += max(zero, h - v[i]);
	}
	return res;	
}

void urunov(){
	ll n, x;
	cin >> n >> x;
	vector<ll> v(n);
	for (ll &i : v) cin >> i;
	ll l = 0, r = *max_element(v.begin(), v.end()) + x + 1;
	while (l+1 < r){
		ll mid = (l + r) / 2;
		if (cur_volume(v, mid) <= x) l = mid;
		else r = mid;
	}
	cout << l << endl;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) urunov();
}
