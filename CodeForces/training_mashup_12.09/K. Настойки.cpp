#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (ll &i : v) cin >> i;
    ll sum = 0LL;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (ll &i : v){
        sum += i;
        pq.push(i);
        if (sum < 0){
            sum -= pq.top();
            pq.pop();
        }
    }
    cout << pq.size();
}