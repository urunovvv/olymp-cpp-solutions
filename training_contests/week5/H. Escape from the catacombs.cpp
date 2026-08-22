#include <bits/stdc++.h>
using namespace std;
vector<string> Map(1002);


int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> Map;
    int s_row = -1, s_col = -1, e_row = -1, e_col = -1; 
    for (int i = 0; i < n; i++){
    	for (int j = 0; j < m; j++){
	    char c;
	    cin >> c;
	    Map[i][j] = c;
	    if (c == 'S'){
	        s_row = i;
		s_col = j;
	    }if (c == 'E'){

	    }
	}
    }

}
