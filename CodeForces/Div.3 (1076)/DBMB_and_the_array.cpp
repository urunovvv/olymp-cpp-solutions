#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--){
        int n,s,x, cnt = 0;
        cin >> n >> s >> x;
        int num;
        for(int i=0; i<n; i++){
            cin >> num;
            cnt += num;
        }
        if (s - cnt < 0) {cout << "NO\n"; continue;}
        cout << ((s - cnt) % x == 0 ? "YES\n" : "NO\n");
    }
}
