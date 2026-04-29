 #include <bits/stdc++.h> 
 #define ll long long 
 using namespace std; 
 int main() { 
    ll n;
    cin >> n; 
    int a[n][n]; 
    for(ll i=0;i<n;i++){ 
        for(ll j=0;j<n;j++){ 
            a[i][j]=0; 
        } 
    } 
    for(ll i=0;i<n;i++){ 
        ll x;cin >> x; 
        a[i][i] = x; 
    } 
    if(n%2==0){ 
        for(ll i=1;i<n;i++){ 
            if(i%2==0){ 
                for(ll m=0,j=i;j<n;j++, m++){ 
                    a[j][m] = min(a[j-1][m], a[j][m+1]); 
                } 
            }
            else{ 
                for(ll m=0,j=i;j<n;j++, m++){ 
                    a[j][m] = max(a[j-1][m], a[j][m+1]); 
                } 
            } 
        } 
    }
    else{ 
        for(ll i=1;i<n;i++){ 
            if(i%2==0){ 
                for(ll m=0,j=i;j<n;j++, m++){ 
                    a[j][m] = max(a[j-1][m], a[j][m+1]); 
                } 
            }
            else{ 
                for(ll m=0,j=i;j<n;j++, m++){ 
                    a[j][m] = min(a[j-1][m], a[j][m+1]); 
                } 
            }
        }
    }
    cout << dp[n][n]
}