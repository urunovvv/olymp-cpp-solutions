#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> db;
    int n;
    cin >> n;
    while (n--){
        string name;
        cin >> name;
        if (db[name] == 0){
            cout << "OK" << endl;
            db[name] = -1;
        }else{
            db[name] += (db[name] == -1 ? 2 : 1);
            cout << name << db[name] << endl;
        }
    }
}