#include <bits/stdc++.h>
using namespace std;
const int SIZE = 200001;
int main()
{
    int n;
    cin >> n;
    vector<int> Stack(SIZE);
    int top = 0;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        if (s == "ADD"){
            int x;
            cin >> x;
            Stack[top++] = x;
        }else{
            if (top > 0) top--;
        }
    }
    cout << top << '\n';
    for (int i = 0; i < top; i++) cout << Stack[i] << " ";
}