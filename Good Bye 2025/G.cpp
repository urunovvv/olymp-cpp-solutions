#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (auto &x:v) cin >> x;
    int res = v[0];
    for (int i=1; i<n; i++){
        res ^= v[i];
    }
    cout << (res!=0 ? "Santa smiles" : "Elves drink hot cocoa");
    return 0;
}
