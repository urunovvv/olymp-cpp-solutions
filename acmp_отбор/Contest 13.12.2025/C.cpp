#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    map<char, int>letters={
        {'A',1},
        {'B',1},
        {'C',1},
        {'E',1},
        {'H',1},
        {'K',1},
        {'M',1},
        {'O',1},
        {'P',1},
        {'T',1},
        {'X',1},
        {'Y',1}};
    for (int i=0; i<n; i++){
        string s;
        cin >> s;
        if (s.size()!=6
            or !isdigit(s[1])
            or !isdigit(s[2])
            or !isdigit(s[3])
            or letters[s[0]]!=1 or letters[s[4]]!=1 or
            letters[s[5]]!=1){
            cout << "No\n";
        }
        else cout << "Yes\n";
    }
    return 0;
}
