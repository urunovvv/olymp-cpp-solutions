#include <bits/stdc++.h>
using namespace std;

int slidingWindow(vector<int> &v, int k)
{
    int n = v.size();
    unordered_map<int, int> mp;
    int l = 0, r = 0;
    int ans = 0;  
    while (r < n)
    {
        mp[v[r]]++;
        while (mp.size() > k)
        {
            mp[v[l]]--;
            if (mp[v[l]] == 0)
                mp.erase(v[l]);
            l++;
        }
        ans += (r - l + 1);
        r++;
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &i : v)
        cin >> i;
    cout << slidingWindow(v, k) - slidingWindow(v, k - 1);       
}