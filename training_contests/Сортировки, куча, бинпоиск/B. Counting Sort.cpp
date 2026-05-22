#include <bits/stdc++.h>
using namespace std;

int cnt[102];

void countingSort(vector<int> &a){
    int n = a.size();
    for (int &i : a) cnt[i]++;
    for (int i = 0; i< 102; i++){
        while (cnt[i]--){
            cout << i << ' ';
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    countingSort(a);
}