#include <bits/stdc++.h>
using namespace std;

#define sq cout << "SQUARE\n"
#define tr cout << "TRIANGLE\n"

int lengthOfOnes(string &s){
    int ones = 0;
    for (char c : s) ones += c == '1';
    return ones;
}

void urunov()
{
    int n;
    cin >> n;
    vector<string>a(n);
    set<int> lengths;
    for (string &s : a) {
        cin >>s;
        if (lengthOfOnes(s) != 0) lengths.insert(lengthOfOnes(s));
    }
    lengths.size() == 1 ? sq : tr;
}

int main(){
    int t;
    cin >> t;
    while (t--) urunov();
}