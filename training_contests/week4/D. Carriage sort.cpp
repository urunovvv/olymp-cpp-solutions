#include <bits/stdc++.h>
using namespace std;

void run(){
    int q;
    cin >> q;
    deque<int> d;
    string action;
    while (q--){
        cin >> action;
        if (action == "push_front"){
            int n;
            cin >> n;
            d.push_front(n);
        } else if (action == "push_back") {
            int n;
            cin >> n;
            d.push_back(n);
        } else if (action == "pop_front") {
            int out = d.front();
            d.pop_front();
            cout << out << '\n';

        } else if (action == "pop_back") {
            int out = d.back();
            d.pop_back();
            cout << out << '\n';
        } else if (action == "front") {
            cout << d.front() << '\n';
        } else if (action == "back") {
            cout << d.back() << '\n';
        } else {
            cout << d.size() << '\n';
        }
    }
}

int main(){
    run();
}