#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;
    vector<int> a(0);
    while(t--){
        for (int i=0;i<s.size();i++){
            if(s[i]=='+'){
                a.push_back(i);
            }
        }
        for (int i=0;i<a.size();i++){
            if(a[i]>0&&a[i]<s.size()-1){
                s[a[i]+1]='+';
                s[a[i]-1]='+';
                }
            if(a[i]==0){
                s[s.size()-1]='+';
                s[1]='+';
            }
            if(a[i]==s.size()-1){
                s[0]='+';
                s[s.size()-2]='+';
            }
        }
    }
    cout<<s<<'\n';
    return 0;
    }
