#include <bits/stdc++.h>
using namespace std;
void urunov(){
    int n;
    string s;
    cin >> n >> s;
    if (!n%2){
        cout << "NO\n";
        return;
    }
    stack<char>st;
    for (char c:s){
        if (st.size()>0 and st.top()==c) st.pop();
        else st.push(c);
    }
    cout << (st.empty() ? "YES\n" : "NO\n");
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        urunov();
    }
}
