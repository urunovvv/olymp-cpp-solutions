#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int >v(n);
    int j=1;
    for (int i : v){
        i = j;
        j++;
    }
    int i=1;
    while (v.size() > 1){
        v.erase(v.begin()+((k-1)*i)%n);
        i++;
    }
    cout << v[0];
    return 0;
}
