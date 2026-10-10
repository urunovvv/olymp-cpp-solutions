// #pragma GCC target("avx2")
// #pragma GCC optimize("O3")
// #pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
using namespace std;

// ifstream fin("test.txt");

void urunov()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<size_t>mem;
    vector<bool> printed(n, false);
    for (int i = 0; i < n; i++){
        if (s[i] == '3'){
            printed[i] = true;
        }else{
            if (s[i] == '1'){
                mem.push(i);
            }else{
                if (!mem.empty()){
                    printed[mem.top()] = true;
                    mem.pop();
                }else{
                    printed[i] = true;
                }
            }
        }
    }
    cout << count(all(printed), false) << '\n';
    for (int i = 0; i < n; i++){
        if (!printed[i]){
            cout << i + 1 << ' ';
        }
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    for (int z = 0; z < t; z++) {
        // printf("TEST #%d\n", z+1);
        urunov();
        // printf("======================\n");
    }
}