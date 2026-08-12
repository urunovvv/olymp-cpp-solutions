#include <bits/stdc++.h>
using namespace std;
#define ld long double 
#define ff first
#define ss second 

struct dot{
    int x;
    int y;
};

double myDistance(pair<dot, dot> &p){
    return (pow(p.ss.x - p.ff.x, 2) + pow(p.ss.y - p.ff.y, 2));
}

int main(){
    int n;
    cin >> n;
    vector<dot> dots(n);
    for (int i = 0; i < n; i++) cin >> dots[i].x >> dots[i].y;
    set<double>distances;
    for (int i = 0; i < n - 1; ++i){
        for (int j = i + 1; j < n; j++){
            pair<dot, dot> tmp = {dots[i], dots[j]};
            distances.insert(myDistance(tmp));
        }
    }
    cout << distances.size() << '\n';
    cout.precision(12);
    for (auto &x : distances){
        cout << fixed << sqrt(x) << '\n';
    }
}