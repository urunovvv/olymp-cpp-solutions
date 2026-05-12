#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin >> n;
    vector<ll>nums = {1};
    ll i = 0;
    vector<bool>added(1000000, false);
    for (ll j=0; j<10000; j++){
        if (!added[2*nums[i]]) {nums.push_back(2*nums[i]); added[2*nums[i]] = true;}
        if (!added[3*nums[i]]) {nums.push_back(3*nums[i]); added[3*nums[i]] = true;}
        if (!added[5*nums[i]]) {nums.push_back(5*nums[i]); added[5*nums[i]] = true;}
        i++;
    }
    sort(nums.begin(), nums.end());
    cout << nums[n-1];
    return 0;
}//1 2 3 4 5 6 8 9 10 12