#include <bits/stdc++.h>
using namespace std;

void edgeCutter(vector<int> &v){
    int start = 0, fin = v.size() - 1;
    while (v[start] < v[start+1]) start++;
    while (v[fin] < v[fin - 1] and fin > start) fin--;
    v = vector<int>(v.begin()+start, v.begin()+fin+1);
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v) cin >> i;
    edgeCutter(v);
    vector<int>a(v),b(v);
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    if (a == v || v == b){
        cout << '0';
        return 0;
    }
    int l = 1, r = 2;
    long long capacity = 0;
    while (l < r and r < v.size()){
        if (v[l] >= v[l-1] and v[r] >= v[r-1]){
            capacity += min(v[l], v[r]) - max(v[l-1], v[r-1]);
            l++;
            r++;
        }
        else if (v[l] < v[l-1]) l++;
        else r++;
    }
    cout << capacity;
} 