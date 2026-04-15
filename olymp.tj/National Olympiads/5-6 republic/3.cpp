#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int>m;
    for (int i=0; i<5; i++){
        int cur;
        cin >> cur;
        m[cur]++;
    }
    for (auto &pair:m){
        if (pair.second == 2) {cout << pair.first; return 0;}
    }
    return 0;
}
