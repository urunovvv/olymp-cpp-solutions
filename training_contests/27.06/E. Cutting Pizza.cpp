#include <bits/stdc++.h>
using namespace std;
#define ld long double

const ld eps = 1e-8;
const ld pi = 3.14159265358979323846;

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> rads (n);
    vector<ld> areas;
    ld total_area = 0;
    for (int &x : rads) {
        cin >> x;
        total_area += x * x * pi;
        areas.push_back(x * x * pi);
    }
    sort(areas.rbegin(), areas.rend());
    ld l = 0, r = total_area;
    printf("total %d\n", total_area); 
    ld ans = 0;
    while (r - l > eps) {
        ld mid = (l + r) / 2.0; // trying to guess the area of a piece of pizza
        bool can_cut = true;
        int cnt=0;
        for (ld area : areas) {
            if (mid <= area) {
                can_cut = false;
                break;
                cnt += (int)(area / mid);
            }
            if (cnt >= k) break;
        }
        if (can_cut){
            ans = mid;
            l = mid;
        } else {
            r = mid;
        }
        
    }
    cout << fixed << setprecision(8) << ans;
}