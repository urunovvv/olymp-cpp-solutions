#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int>m;
    string s;
    cin >> s;
    for (int i=0; i<s.size(); i++){
        for (int j=0; j<s.size(); j++){
            string cur = s.substr(i, j);
            m[cur] = 1;
        }
    }
    cout << m.size();
    return 0;
}
