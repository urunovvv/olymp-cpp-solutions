#include <bits/stdc++.h>
#define ll long long
using namespace std;

double dist(pair<ll,ll> d1, pair<ll, ll>d2){
    return sqrt(pow(d1.first - d2.first, 2)+pow(d1.second-d2.second, 2));
}

double area(vector<pair<ll,ll>>dots){
    double a = dist(dots[0], dots[1]);
    double b = dist(dots[1], dots[2]);
    double c = dist(dots[2], dots[0]);

    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main()
{
    vector <pair<ll, ll>>p(4);
    for (auto &i : p){
        cin >> i.first >> i.second;
    }
    vector <pair<ll,ll>>abc={p[0], p[1], p[2]};
    vector <pair<ll,ll>>abp={p[0], p[1], p[3]};
    vector <pair<ll,ll>>acp={p[0], p[2], p[3]};
    vector <pair<ll,ll>>bcp={p[1], p[2], p[3]};
    double sabc = area(abc), sabp = area(abp), sacp = area(acp),sbcp = area(bcp);
    double diff = abs(sabc - sabp - sacp - sbcp);
    if (diff <= 1e-5){cout << "YES";}
    else cout << "NO";
    return 0;
}
