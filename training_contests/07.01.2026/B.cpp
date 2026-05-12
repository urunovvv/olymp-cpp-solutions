#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define eb emplace_back
#define ff first
#define ss second
using namespace std;

ld dist(pair<ld, ld>&p1, pair<ld, ld>&p2){
    return sqrt(pow(p1.ff - p2.ff, 2) + pow(p1.ss-p2.ss, 2));
}

int main()
{
    vector<pair<ld, ld>>points(3);
    for (auto &x:points){
        cin >> x.ff >> x.ss;
    }
    ld a = dist(points[0], points[1]);
    ld b = dist(points[1], points[2]);
    ld c = dist(points[0], points[2]);

    ld p = (a+b+c)/2;
    ld ans = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << fixed << setprecision(2) << ans;
    return 0;
}
