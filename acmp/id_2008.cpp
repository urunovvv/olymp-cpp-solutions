#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
    cin >> n;
    long long cnt = 0;
    while (n > 0){
    	n -= (n%10 != 0 ? n%10 : (n%100)/10);
        cnt++;
    }
    cout << cnt;
    return 0;
}
