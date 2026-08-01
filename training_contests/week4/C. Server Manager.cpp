#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    queue<int> q;
    char action;
    while (t--){
        cin >> action;
        if (action == '+'){
            int n;
            cin >> n;
            q.push(n);
        }else if (action == '-') q.pop();
        else cout << q.front() << '\n';
    }
}