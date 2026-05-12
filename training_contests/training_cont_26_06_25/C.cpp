#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll a,b;
    cin>>a>>b;
    for (int i=1;i<=a;i++){
        for (int j=1;j<=b;j++){
            if(i*j==b and i+j==a){
                cout<<i<<" "<<j<<'\n';
                return 0;
            }
        }
    }
    return 0;
}
