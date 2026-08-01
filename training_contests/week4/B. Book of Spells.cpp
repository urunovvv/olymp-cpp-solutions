#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    string spell;
    while (q--){
        char action;
        cin >> action;
        if (action == '+'){
            char c;
            cin >> c;
            spell.push_back(c);
        } else if (action == '-') {
            if (!spell.empty()) {
                spell.pop_back();
            }
        } else { // '?'
            cout << spell << '\n';
        }
    }
    return 0;
}