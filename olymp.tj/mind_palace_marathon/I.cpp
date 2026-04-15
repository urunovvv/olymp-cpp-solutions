#include <iostream>
#include <vector>
using namespace std;

int main() {
    int d,m;
    cin >> d >> m;
    vector<int> days = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int nextD = d + 1;
    int nextM = m;
    int monthDays = days[m];
    if (nextD > monthDays) {
        nextD = 1;
        nextM = m + 1;
        if (nextM > 12) nextM = 1;
    }
    cout << nextD << " " << (nextM < 9 ? 0 << nextM : nextM);
    return 0;
}
