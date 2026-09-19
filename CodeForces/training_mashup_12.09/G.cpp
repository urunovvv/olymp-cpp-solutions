#include <bits/stdc++.h>
using namespace std;
#define int long long
void urunov()
{
	int n;
	string s;
	cin >> n >> s;
	int cnt = 0;
	for(auto x : s) cnt += (x == '*');
	int pos = -1;
	int cur = -1;
	for(int i = 0; i < n; i++){
	 	if(s[i] == '*'){
	 	    cur++;
	 	    if(cur == cnt / 2) pos = i;
	 	}
	}
	int ans = 0;
	cur = pos - cnt / 2;
	for(int i = 0; i < n; i++)
		if(s[i] == '*')
		{
		 	ans += abs(cur - i);
		 	cur++;
		}
	cout << ans << '\n';
}

signed main()
{
    int t;
    cin >> t;
    while (t--) urunov();
}