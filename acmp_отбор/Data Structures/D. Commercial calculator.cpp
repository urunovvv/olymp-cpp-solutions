#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    long long ans = 0LL;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;
        pq.push(k);
    }
    while (pq.size() > 1){
        long long a, b;
        a = pq.top(); pq.pop();
        b = pq.top(); pq.pop();
        ans += (a + b);
        pq.push(a + b);
    }
    cout << fixed << setprecision(2) << ans * 0.05;
}
