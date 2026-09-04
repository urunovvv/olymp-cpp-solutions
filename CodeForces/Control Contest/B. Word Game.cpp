#include <bits/stdc++.h>
using namespace std;

void sol(){
    int n;
    cin >> n;
    int points[3] = {3*n, 3*n, 3*n};
    vector<vector<string>>words(3, vector<string>(n));
    map<string, int> cnt;
    for (int j = 0; j < 3; j++){
        for (int i = 0; i < n; i++){
            cin >> words[j][i];
            cnt[words[j][i]]++;
        }
    }
    for (int i = 0; i < 3; i++){
        for (auto &e : words[i]){
            points[i] -= 3 * (cnt[e] == 3) + 2 * (cnt[e] == 2);
        }
    }
    printf("%d %d %d\n", points[0], points[1], points[2]);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        sol();
    }
}