#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{ll n;
    cin >> n;
    string lucky;
    string res;
    for (int i=0; i<to_string(n).size()/2; i++){lucky+='4';}

    for (int i=0; i<to_string(n).size()/2; i++){lucky+='7';}
    while (stoi(lucky) < n && next_permutation(lucky.begin(), lucky.end())){}
    cout << lucky;
    return 0;
}
