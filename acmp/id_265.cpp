#include <bits/stdc++.h>
using namespace std;

int main() {
       int n, k[64][3];
       cin >> n;
       for (int i= 0; i<n; i++) {
             cin >> k[i][1] >> k[i][2];
             k[i][0] = 4;
       }
       if (n == 1) { cout << 4; return 0; }
       for (int i = 0; i<n - 1; i++) {
             for (int j=i+1; j<n; j++){
                    if ((abs(k[i][1] - k[j][1]) == 1 and k[i][2] - k[j][2] == 0) or
                           ((abs(k[i][2] - k[j][2]) == 1 && k[i][1] - k[j][1] == 0)))
                    {
                           k[i][0]--; k[i][0]--;
                    }
             }
       }
       int s = 0;
       for (int i = 0; i<n; i++) s += k[i][0];
       cout << s;
       return 0;
}
