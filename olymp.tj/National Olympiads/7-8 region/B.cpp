#include <iostream>

using namespace std;

int main()
{
    string s, al = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    for (int i=0; i<26; i++){
        if (s == al){cout << "YES"; return 0;}
        s=s[s.size()-1]+s;
        s.pop_back();
    }
    cout << "NO";
    return 0;
}
