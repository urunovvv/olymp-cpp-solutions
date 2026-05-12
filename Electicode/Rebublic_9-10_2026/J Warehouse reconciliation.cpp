#include <bits/stdc++.h>
using namespace std;
void firuz(){
    int n;
    cin>>n;
    vector<ll>a(n),b(n);
    for(int &i:a) cin>>i;
    for(int &i:b) cin>>i;
    sort(begin(a), end(a));
    sort(begin(b), end(b));
    for(ll i=0; i<n; i++){
        if(b[i] - a[i] != 1 && a[i] - b[i] != 0){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) firuz();
}