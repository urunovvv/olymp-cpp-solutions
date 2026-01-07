#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = min(n, 1); i <= max(n, 1); i++){
        cout << i << ' ';
    }
    return 0;
}
