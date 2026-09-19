#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> db;
    for (int i = 0; i < n; i++){
        string name;
        cin >> name;
        if (db[name] == 0){
            cout << "OK\n";
        }else{
            cout << name << db[name] << '\n';
        }
        db[name]++;
    }
}