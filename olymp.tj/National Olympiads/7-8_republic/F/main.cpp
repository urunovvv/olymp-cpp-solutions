#include <iostream>
#include <vector>
using namespace std;

int dist2(pair<int,int> a, pair<int,int> b) {
    return (a.first - b.first) * (a.first - b.first) +
           (a.second - b.second) * (a.second - b.second);
}

bool is_square(vector<pair<int,int>> d) {
    int a = dist2(d[0], d[1]);
    int b = dist2(d[1], d[2]);
    int c = dist2(d[2], d[3]);
    int f = dist2(d[3], d[0]);
    int d1 = dist2(d[0], d[2]);
    int d2 = dist2(d[1], d[3]);
    return (a > 0 && a == b && b == c && c == f && d1 == d2);
}

int main() {
    vector<pair<int,int>> v(4);
    for (int i = 0; i < 4; i++) cin >> v[i].first >> v[i].second;
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            for (int k=0;k<4;k++){
                for (int l=0;l<4;l++){
                    if (i==j || i==k || i==l || j==k || j==l || k==l) continue;
                    vector<pair<int,int>> cur = {v[i],v[j],v[k],v[l]};
                    if (is_square(cur)) {
                        cout << "YES";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO";
    return 0;
}
