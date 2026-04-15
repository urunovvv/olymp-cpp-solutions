#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_set<int>us;
    vector<int>v;
    for (int i=0; i<n; i++){
        int num; cin >> num;
        if (us.find(num) == end(us)){
            us.insert(num);
            v.push_back(num);
        }
    }
    for (auto i:v) cout << i << ' ';
}
