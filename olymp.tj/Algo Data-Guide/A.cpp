#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int>h;
    vector<int>s;
    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            h.push_back(a[i]);
        }
        else if(a[i] < 0){
            s.push_back(a[i]);
        }
    }
    int l = 0, r = 0;
    for(int i = 0; i < h.size() + s.size(); i++){
        if(i % 2 == 0 and l < h.size() or r >= s.size()){
            cout << h[l] << " ";
            l++;
        }
        else if(i % 2 != 0 and r < s.size() or l >= h.size()){
            cout << s[r] << " ";
            r++;
        }
        else cout << 0 << " ";
    }
    return 0;
}
