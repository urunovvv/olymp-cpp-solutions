#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for (int &i:v) cin >> i;
        int idx = 0;
        while (idx < n and v[idx++] == n-i);
        int id = -1;
        for( int i=idx; i<=n; i++ ){
			if( v[i] == n - idx + 1 ) idx = i;
		}
		for( int i = 1; i < idx; i ++ ) cout << v[i] << ' ';
		if( idx != -1 ){
			for(int i = idx; i>=ind; i--) cout << v[i] << ' ';
			for(int i=idx+1; i<=n; i++) cout << v[i] << ' ';
		}
		cout << '\n';
	}
}
    }
}
