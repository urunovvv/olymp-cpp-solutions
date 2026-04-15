#include <bits/stdc++.h>
using namespace std;

int main() {
    long long d, y, h, m, add;
    string mon;
    char comp;
    cin >> d >> mon >> y >> h >> comp >> m >> add;
    map<string, int> months = {
        {"January", 1}, {"February", 2}, {"March", 3},
        {"April", 4}, {"May", 5}, {"June", 6},
        {"July", 7}, {"August", 8}, {"September", 9},
        {"October", 10}, {"November", 11}, {"December", 12}};
    map<int, int> days = {
        {1, 31}, {2, 28}, {3, 31}, {4, 30},
        {5, 31}, {6, 30}, {7, 31}, {8, 31},
        {9, 30}, {10, 31}, {11, 30}, {12, 31}};
    int month = months[mon];
    m += add;
    h += m / 60;
    m %= 60;
    d += h / 24;
    h %= 24;
    while (d > days[month]) {
        d -= days[month];
        month++;
        if (month > 12) {
            month = 1;
            y++;
        }
    }
    for (auto &p : months) {
        if (p.second == month) {
            mon = p.first;
            break;
        }
    }
    cout << d << " " << mon << " " << y << " ";
    if (h < 10) cout << '0';
    cout << h << ":";
    if (m < 10) cout << '0';
    cout << m;
}
