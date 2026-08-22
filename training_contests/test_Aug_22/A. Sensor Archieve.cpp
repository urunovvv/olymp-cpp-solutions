#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	map<int, set<int>> logs;
	for(int i = 0; i < n; i++){
		int id, x;
		cin >> id >> x;
		logs[id].insert(x);
	}
	for(auto &log : logs){
		cout << log.first << " " << log.second.size() << '\n';
	}
}
