#include <iostream>

using namespace std;

bool ispal(string a){
    for (int i=0; i<a.size()/2; i++){
        if(a[i] != a[a.size()-i-1]){return false;}
    }
    return true;
}

int main()
{
    string a;
    cin >> a;
    for (int i=0; i<a.size(); i++){
        for (int j=i+1; j<a.size(); j++){
            string b = a;
            swap(b[i], b[j]);
            if (ispal(b)) {cout << "YES"; return 0;}
        }
    }
    cout << "NO";
    return 0;
}
