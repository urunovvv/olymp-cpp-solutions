#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {    
    int n;    
    cin >> n;   
    vector<ll> a(n);    
    for (int i = 0; i < n; ++i) {        
        cin >> a[i];    
    }    
    ll neg_count = 0;    
    ll sum = 0;    
    ll min_abs = 1e9 + 7;    
    for (int i = 0; i < n; ++i) {        
        if (a[i] < 0) {            
            neg_count++;        
        }        
        sum += abs(a[i]);        
        min_abs = min(min_abs, abs(a[i]));    
    }    
    if (neg_count % 2 == 0) {        
        cout << sum << endl;    
    } 
    else 
    {        
        cout << sum - 2 * min_abs << endl;    
    }    
    return 0;
}