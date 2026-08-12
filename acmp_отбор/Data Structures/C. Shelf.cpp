#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    deque<int>shelf;
    vector<int> ans;
    while (n--){
        int action;
        cin >> action;
        if (action == 1 || action == 2){
            int value;
            cin >> value;
            action == 1 ? shelf.push_front(value) : shelf.push_back(value);
        }else{
            int value = (action == 3 ? shelf.front() : shelf.back());
            action == 3 ? shelf.pop_front() : shelf.pop_back();
            ans.push_back(value);
        }
    }
    for (int i : ans) cout << i << ' ';
}