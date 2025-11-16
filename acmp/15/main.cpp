#include <iostream>

using namespace std;

int main()
{
    int n, cnt=0;
    cin >> n;
    bool a[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> a[i][j];
            if (j < i and a[i][j] == true) cnt++;
        }
    }
    cout << cnt;
    return 0;
}
